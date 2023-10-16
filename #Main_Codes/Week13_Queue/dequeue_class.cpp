#include <iostream>
#include <vector>
using namespace std;
class Dequeue
{
public:
    int size;
    int *arr;
    int front;
    int rear;
    Dequeue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    // normal flow
    void pushRear(int data)
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
    void pushFront(int data)
    {
        if ((front == 0 && rear == size - 1) || (rear == front - 1))
        {
            cout << "CirQueue is Full!" << endl;
        }
        else if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = data;
    }

    // normal flow
    void popFront()
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

    void popRear()
    {
        if (rear == -1)
        {
            cout << "CirQueue is empty, can'nt pop" << endl;
            return;
        }
        else if (front == rear)
        {
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            arr[rear] = -1;
            rear--;
        }
    }
    // JUST FOR UNDERSTANDING:
    void print()
    {
        // for (int i = 0; i < size; i++)
        // {
        //     arr[i] = 0;
        // }
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Dequeue q(10);
    // q.print();

    q.pushRear(10);
    q.pushRear(20);
    q.pushRear(30);
    q.pushRear(40);
    q.pushRear(50);
    q.pushRear(60);
    q.pushRear(70);
    q.pushRear(80);
    q.pushRear(90);
    q.pushRear(100);
    // q.pushRear(110);
    q.popFront();
    q.popFront();
    q.popRear();
    q.popRear();

    q.pushFront(7);
    q.pushRear(16);
    // q.pushRear(19);
    // q.pushRear(197);
    // q.pushRear(197);
    q.pushFront(87);
    q.pushFront(55);

    q.print();
    return 0;
}