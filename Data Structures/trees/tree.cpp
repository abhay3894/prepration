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

int height(treeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = height(root->left) + 1;
    int right = height(root->right) + 1;
    return max(left, right);
}

void inorder(treeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

bool search(treeNode *root, int key)
{
    if (root == NULL)
    {
        return false;
    }

    else if (key == root->data)
    {
        return true;
    }
    else if (key <= root->data)
    {
        return search(root->left, key);
    }
    else if (key > root->data)
    {
        return search(root->right, key);
    }

    return false;
}

void LevelOrder(treeNode* root)
{
    if(root == NULL) return;
    queue<treeNode*> q;
    q.push(root);
    while (q.size() > 0)
    {
        vector<int> v;
            int n = q.size();
            for(int i = 0; i < n; i++)
            {
                treeNode* temp = q.front();
                q.pop();
                if(temp->left != NULL)
                {
                    q.push(temp->left);
                }
                if(temp->right != NULL)
                {
                    q.push(temp->right);
                }
                cout << temp->data << " ";
            }
        cout << "\n";
    }
}

int main()
{
    treeNode *root = NULL;
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 5);
    root = insert(root, 4);
    // inorder(root);
    // cout << "\n";
    // cout << height(root);
    // cout << "\n";
    // if (search(root, 500))
    //     cout << "Found";
    // else
    //     cout << "Not Found";
    LevelOrder(root);
    return 0;
}