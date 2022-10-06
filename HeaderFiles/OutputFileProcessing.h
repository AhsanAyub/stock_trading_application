#include "FileIoProcessing.h"

#ifndef OUTPUTFILEPROCESSING_H
#define OUTPUTFILEPROCESSING_H

using namespace std;

class OutputFileProcessing: public FileIoProcessing
{   public:
        vector<string> dataset;
        void ProcessFile();
        ~OutputFileProcessing();  
};

#endif