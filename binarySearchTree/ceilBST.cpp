#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

int findCeil(Node *root, int input)
{
    if (root == NULL)
        return -1;
    int ceil = -1;

    while (root != nullptr)
    {
        if (root->data == input)
        {
            ceil = root->data;
            return ceil;
        }

        if (input > root->data)
        {
            root = root->right;
        }
        else
        {
            ceil = root->data;
            root = root->left;
        }
    }
    return ceil;
}