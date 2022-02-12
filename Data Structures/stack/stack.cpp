#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];

class Stack
{
public:
    int top;
    int arr[100];
    Stack()
    {
        top = -1;
    }
    void push(int data)
    {
        if (top == -1)
        {
            top++;
            arr[top] = data;
            return;
        }
        top++;
        arr[top] = data;
    }
    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty!" << endl;
            return;
        }
        cout << arr[top] << endl;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty!" << endl;
            return;
        }
        cout << arr[top] << " Popped! " << endl;
        arr[top] = 0;
        top--;
    }

    void traverse()
    {
        cout << arr[top] << " <- Top " << endl;
        for (int i = top - 1; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    s.peek();
    s.traverse();
    return 0;
}