#include <string>

#ifndef FILEIOPROCESSING_H
#define FILEIOPROCESSING_H

using namespace std;

class FileIoProcessing
{
    public:
        void SetFileName(string fName);
        virtual void ProcessFile() { return; };
        
    protected:
        string sFileName = "";
};

#endif