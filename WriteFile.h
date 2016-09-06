#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;
///Class to write to a file.
/**
WriteFile creates an object that allows you to write individual lines to a text file. 
Upon exit, the file will be written to the directory containing the WriteFile.cpp and .h files. 
Very simple to use and provides an easy way to write to a file without using IOstream.
*/
class WriteFile 
{
   private: 
    ofstream output_file;
    bool closed;
   public:
    WriteFile(const char* file_name);/// Requires a character array containing the file name to write to, including the extension.
	~WriteFile();///closes the WriteFile, and deletes it.
	void writeLine(String* line);///Writes to the next line of the file, and ends that line as well.
	void close();///closes the WriteFile, but does not delete it.
};


#endif
