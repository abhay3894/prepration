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

Node *deleteNode(Node *head, int data)
{
    Node *prev, *current, *next;
    prev = NULL;
    current = head;
    next = current->next;
    if (head->data == data)
    {
        head = next;
        current->next = NULL;
        return head;
    }
    while (current->data != data && current->next != NULL)
    {
        prev = current;
        current = current->next;
        next = current->next;
    }
    if (current == NULL)
    {
        return head;
    }
    else
    {
        prev->next = next;
        current->next = NULL;
    }
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

Node *push(Node *head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
    newNode->next = head;
    head = newNode;
    return head;
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

void test(Node *head)
{
    Node *current = head;
    map<Node *, int> m;
    while (current != NULL)
    {
        m[current]++;
        current = current->next;
    }
    cout << m[head];
}

void traverse(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "\n";
}

int main()
{
    Node *head = NULL;
    head = insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    head = push(head, 5);
    traverse(head);
    // head = reverserec(head);
    // traverse(head);
    // test(head);
    // head = deleteNode(head, 30);
    // traverse(head);
    head = reverse(head);
    traverse(head);

    return 0;
}