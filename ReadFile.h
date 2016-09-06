#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;
///Class to read a file
/**
ReadFile creates an object that allows you to read sequential lines from a text file. 
Implementation is very basic, and does not allow for reading specific lines or previous lines, can only read sequentially.
*/ 
class ReadFile 
{
	private:
		ifstream input_file;
		bool _eof;
		bool closed;
	public:
		ReadFile(const char* file_name);///
		~ReadFile();/// Closes the readfile and destroys it.
		String* readLine();/// Reads the next line of the file, returns null if file is at the end or closed.
		bool eof(); ///returns false if at end of file.
		void close(); ///Closes the ReadFile without destroying it.
};




#endif
