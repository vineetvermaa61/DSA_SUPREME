#include <iostream>
#include <vector>
using namespace std;
class CirQueue
{
public:
    int size;
    int *arr;
    int front;
    int rear;
    CirQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        // starting from -1
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        if ((front == 0 && rear == size - 1) || (rear == front - 1))
        {
            cout << "CirQueue is Full!" << endl;
        }
        else if (front == -1)
        {
            front = 0;
            rear = 0;
            arr[rear] = data;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        if (front == -1)
        {
            cout << "CirQueue is empty, can'nt pop" << endl;
            return;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    // JUST FOR UNDERSTANDING:
    void print()
    {
        // arr[size] = {0};
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    CirQueue q(5);
    q.push(5);
    q.push(10);
    q.push(60);
    q.push(70);
    q.push(80);
    q.pop();
    q.pop();
    q.push(90);
    q.print();
    return 0;
}