#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include "../HeaderFiles/InputFileProcessing.h"

using namespace std;

void InputFileProcessing::ProcessFile()
{
    ifstream infile;
    infile.open(sFileName);

    if(!infile) // exit program if the file is not found
    {
        cerr << "Sorry, there is no file found!" << endl;
        exit(0);
    }
    string line; // this variable is responsible to access each line
    //scan per line and store it to the vector
    while(getline(infile, line)) 
        dataset.push_back(line);

    infile.close();	// close the file that was accessed below
}

vector<string> InputFileProcessing::GetProcessedDataset()
{
    return dataset;
}
InputFileProcessing::~InputFileProcessing()
{
    dataset.clear();
}