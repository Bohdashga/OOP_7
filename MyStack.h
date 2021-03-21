#pragma once
#include <stack>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class MyStack
{
private:
	stack<string> stck;
public:
	MyStack()
	{

	}

	MyStack(MyStack& stack)
	{
		stck = stack.stck;
	}

	string getTop();
	string pop();
	void push(string data);
	void reverse();
	int getSize();
};

