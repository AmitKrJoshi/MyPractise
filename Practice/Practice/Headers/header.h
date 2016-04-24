//#pragma once
#include<iostream>
#include<iomanip>
#include <sstream>      // std::istringstream
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

#define UINT64 unsigned long long
typedef unsigned long int UINT32;
typedef int UINT16;
typedef char UINT8;


ostream & tab (ostream & obj)
{
	obj << "\t";
	return obj;
}

ostream & newline (ostream & obj)
{
	obj << "\n";
	return obj;
}