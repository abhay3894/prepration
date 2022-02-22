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
Node *reverse(Node *head)
{
    Node *current = head;
    Node *prev = NULL;
    Node *next = NULL;
    while (current != NULL)
    {
        Node *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
Node *reverserec(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *current = reverserec(head->next);
    head->next->next = head;
    head->next = NULL;
    return current;
}

Node *mergelist()

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
    head = reverserec(head);
    traverse(head);
    return 0;
}