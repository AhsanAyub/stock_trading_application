#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include "../HeaderFiles/OutputFileProcessing.h"

using namespace std;

void OutputFileProcessing::ProcessFile()
{
    ofstream outfile;
    outfile.open(sFileName);
    
    int len = dataset.size();
    for(int i = 0; i < len; i++)
        outfile << dataset.at(i);
    
    outfile.close();
}

OutputFileProcessing::~OutputFileProcessing()
{
    dataset.clear();
}