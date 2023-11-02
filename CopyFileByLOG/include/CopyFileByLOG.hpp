#ifndef _COPYFILEBYLOG_HPP_
#define _COPYFILEBYLOG_HPP_

#include <iostream>
#include <fstream>

namespace log
{
    int copyFile(char (&in_path)[], char (&out_path)[]);
}

#endif //_COPYFILEBYLOG_HPP_