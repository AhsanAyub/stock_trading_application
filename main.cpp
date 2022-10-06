/*
 * 
 * An application that reads an input file (e.g., 'input.csv') and writes out
 * anew file calculated the inputs.
 * 
 * @author Md. Ahsan Ayub [mayub42@tntech.edu]
 * @version 2.0 03/21/2021
 * 
*/

// Including all the required libraries

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <fstream>
#include <sstream>

#include "HeaderFiles/FileIoProcessing.h"
#include "HeaderFiles/InputFileProcessing.h"
#include "HeaderFiles/Stock.h"
#include "HeaderFiles/OutputFileProcessing.h"

using namespace std;

/* Utility function to split the stringsc and the tokens as vectors with the size of 4 */
vector<string> split (string s, string delimiter)
{
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res; // Responsible to store all the entries

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos)
    {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}

int main(int argc, char *argv[])
{
    if (argc != 2) // Checks only one name of the file is passed as an argument
    {
        cerr << "Sorry, incorrect usuage of running the program.\nCorrect Usuage: ./<program_name> <file_name>" << endl;
        return -1;
    }
    
    string fName = argv[1]; // Storing the file name in a variable
    
    InputFileProcessing InputFileIo;
    InputFileIo.SetFileName(fName);
    InputFileIo.ProcessFile();
    
    int len = InputFileIo.GetProcessedDataset().size();
    if(!len)
    {
        cerr << "Sorry, an empty file is given!" << endl;
        return -1;
    }
    else
        cout << "The given file has been sucessfully read." << endl;

    string delimiter = ",";
    map<string,Stock> mStockIndex;  // This map will store all the symbols as its key and its corresponding information as the class container
    map<string,Stock>::iterator it; // Iterator to iterate through the map

    // Start processing the trade records in the given CSV file
    for (int i = 0; i < len; i += 1)
    {
        // Split the string based on the commas in each string line
        vector<string> temp = split(InputFileIo.GetProcessedDataset().at(i), delimiter);

        // Check if the key already exists
        it = mStockIndex.find(temp.at(1));  // Logarithm complexity
        if (it == mStockIndex.end()) // Not present; let's create new object
        {
            Stock s(stol(temp.at(0)), temp.at(1), stoi(temp.at(2)), stoi(temp.at(3)));
            mStockIndex.insert(pair<string, Stock> (temp.at(1), s));
        }   
        else    // Present; let's add another trade
            it->second.AddTrade(stol(temp.at(0)), stoi(temp.at(2)), stoi(temp.at(3)));
    }

    //dataset.clear();    // Clear the vector from the memory to process it for the write operation into the CSV file

    string line;
    OutputFileProcessing OutputFileIo;
    OutputFileIo.SetFileName("output.csv");

    // This loop will process the required computations for each Symbols
    for (it = mStockIndex.begin(); it != mStockIndex.end(); it++)
    {
        it->second.SetMaxTimeGap(); // Compute Maximum time gap
        it->second.SetVolume();     // Compute the sum of the quantity for all trades in a symbol
        it->second.SetWeightedAveragePrice();   // Compute average price per unit traded not per trade
        it->second.SetMaxPrice();   // Compute the maximum trade price

        line = "";
        line = it->first + delimiter + to_string(it->second.GetMaxTimeGap()) + delimiter + to_string(it->second.GetVolume()) + delimiter + to_string(it->second.GetWeightedAveragePrice()) + delimiter + to_string(it->second.GetMaxPrice()) + "\n";
        OutputFileIo.dataset.push_back(line);    // Store the string as per the output instructions
        //cout << it->first << " " << it->second.getMaxTimeGap() << " " << it->second.getVolume() << " " << it->second.getWeightedAveragePrice() << " " << it->second.getMaxPrice() << endl;
    }

    cout << "All the required computations have been successfuly performed." << endl;

    // Write to the file using the populated dataset vector
    OutputFileIo.ProcessFile();
    cout << "The desired output has been sucessfully writen to `output.csv` file. Thank you!" << endl;

    // Free the memory
    mStockIndex.clear();

    return 0;
}