#include <iostream>
#include <vector>
using namespace std;
class Stack
{
public:
    int top;
    int *arr;
    int size;
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // functions
    void push(int data)
    {
        if (size - top > 1)
        {
            // space available
            // insert
            top++;
            arr[top] = data;
        }
        else
        {
            // space not available
            cout << "Stack OVERFLOW" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            // stack is empty
            cout << "Stack Underflow, can't delete element" << endl;
        }
        else
        {
            // stack is not empty
            top--;
        }
    }

    int getTop()
    {
        if (top == -1)
            cout << "There is no element in stack" << endl;
        else
            return arr[top];
    }

    int getSize()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};
int main()
{
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while (!s.isEmpty())
    {
        cout << s.getTop() << endl;
        s.pop();
    }
    cout << endl;
    cout << "Size of stack: " << s.getSize() << endl;
    return 0;
}