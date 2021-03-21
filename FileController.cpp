#include "FileController.h"

FileController::FileController(string fileName)
{
	this->fileName = fileName;
}

MyStack FileController::readFromFile()
{
	MyStack stack;

	ifstream file(fileName);

	if (file.is_open())
	{
		while (!file.eof())
		{
			string data;
			getline(file, data);

			if (!file.eof())
				stack.push(data);
		}

		file.close();
	}

	return stack;
}

void FileController::writeInFile(MyStack& stack)
{
	ofstream file(fileName);

	while (stack.getSize() != 0) {
		file << stack.pop() << endl;
	}

	file.close();
}
