#include <iostream>
#include <vector>
using namespace std;
class Queue
{
public:
    int size;
    int *arr;
    int front;
    int rear;
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data)
    {
        if (rear == size)
        {
            cout << "Queue is Full!" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    void pop()
    {
        if (front == rear)
        {
            cout << "Queue is empty, can'nt pop" << endl;
            return;
        }
        else
        {
            // marking
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront()
    {
        if (front == rear)
            cout << "Queue is empty" << endl;
        else
            return arr[front];

        // return -1;
    }

    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getSize()
    {
        return rear - front;
    }
};
int main()
{
    Queue q(10);
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(25);

    cout << "Size of Queue is: " << q.getSize() << endl;
    q.pop();
    cout << "Size of Queue is: " << q.getSize() << endl;

    if (q.isEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is NOT empty" << endl;
    }

    cout << "Front element of queue is: " << q.getFront() << endl;

    return 0;
}