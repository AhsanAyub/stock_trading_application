#include "FileIoProcessing.h"

#ifndef INPUTFILEPROCESSING_H
#define INPUTFILEPROCESSING_H

using namespace std;

class InputFileProcessing: public FileIoProcessing
{
    public:
        void ProcessFile();
        vector<string> GetProcessedDataset();
        ~InputFileProcessing();
        
    private:
        vector<string> dataset;
};

#endif