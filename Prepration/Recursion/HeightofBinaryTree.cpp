#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}

void inTraverse(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inTraverse(root->left);
    cout << root->data << " ";
    inTraverse(root->right);
}
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    if (left >= right)
    {
        return left + 1;
    }
    else if (right > left)
    {
        return right + 1;
    }
    return 0;
}

int main()
{
    Node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 5);
    root = insert(root, 6);
    inTraverse(root);
    cout << "\nHeight : " << height(root);
    return 0;
}