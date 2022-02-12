#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

Node *insert(Node *head, int data)
{
    Node *current = head;
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
    return head;
}
void traverse(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << "->";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    traverse(head);
    return 0;
}