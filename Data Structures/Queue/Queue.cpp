#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];

class Queue
{
public:
    int front;
    int rear;
    int arr[100];
    Queue()
    {
        front = -1;
        rear = -1;
    }
    void enqueue(int data)
    {
        if (rear == -1)
        {
            front++;
            rear++;
            arr[rear] = data;
            return;
        }
        rear++;
        arr[rear] = data;
    }
    void dequeue()
    {
        if (front == rear)
        {
            front = -1;
            rear = -1;
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << arr[front] << " Deleted " << endl;
        arr[front] = 0;
        front++;
    }
    void traverse()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue();
    q.traverse();

    return 0;
}