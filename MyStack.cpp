#include "MyStack.h"

string MyStack::getTop()
{
    if (!stck.empty())
        return stck.top();
    return "";
}

string MyStack::pop()
{
    string res = "";
    if (!stck.empty())
    {
        res = stck.top();
        stck.pop();
    }

    return res;
}

void MyStack::push(string data)
{
    stck.push(data);
}

void MyStack::reverse()
{
    stack<string> buffer;

    while (!stck.empty())
    {
        buffer.push(pop());
    }

    stck = buffer;
}

int MyStack::getSize()
{
    return stck.size();
}
