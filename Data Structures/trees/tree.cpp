#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];

struct treeNode
{
    int data;
    treeNode *left;
    treeNode *right;
    treeNode(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

treeNode *insert(treeNode *root, int data)
{
    treeNode *newNode = new treeNode(data);
    if (root == NULL)
    {
        root = newNode;
        return root;
    }
    else if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data >= root->data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}

void inorder(treeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}

int main()
{
    treeNode *root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 5);
    inorder(root);
    return 0;
}