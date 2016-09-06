#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* file_name)
{
   output_file.open(file_name);
   closed = false;
  
}

WriteFile::~WriteFile()
{
	close();
}

WriteFile::close()
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

WriteFile::writeLine(String* line)
{
   if (closed && line->length() > 0)
   {
      output_file << linegetText() << endl;
   }
}
