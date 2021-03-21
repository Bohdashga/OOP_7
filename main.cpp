#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <stack>

#include "MyStack.h"
#include "FileController.h"

using namespace std;

void selectFile()
{
    WIN32_FIND_DATA file;
    HANDLE hFind = FindFirstFile(L"*.txt", &file);

    if (hFind != INVALID_HANDLE_VALUE)
    {
        do
        {
            wcout << file.cFileName << endl;
        } while (FindNextFile(hFind, &file));
        FindClose(hFind);
    }
}


int main()
{
    selectFile();

    string fileName;
    stack<string> strs;

    cout << "\nInput file name from list above > ";
    getline(cin, fileName);

    FileController file(fileName);
    MyStack stack;

    stack = file.readFromFile();

    MyStack buffer1(stack);

    cout << "Stack from file:\n";
    while (buffer1.getSize() != 0)
    {
        cout << buffer1.pop() << endl;
    }

    stack.reverse();
    MyStack buffer2(stack);

    cout << "\nReversed stack:\n";

    while (buffer2.getSize() != 0)
    {
        cout << buffer2.pop() << endl;
    }

    return 0;
}