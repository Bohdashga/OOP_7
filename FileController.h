#pragma once
#include <string>
#include <fstream>
#include "MyStack.h"

using namespace std;

class FileController
{
protected:
	string fileName;
public:
	FileController(string fileName);

	MyStack readFromFile();
	void writeInFile(MyStack& stack);
};

