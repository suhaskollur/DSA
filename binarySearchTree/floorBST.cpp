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

class Solution
{
public:
    int floor(Node *root, int x)
    {
        // Code here

        int floor = -1;

        while (root != nullptr)
        {
            if (root->data == x)
            {
                floor = root->data;
                return floor;
            }

            if (x > root->data)
            {
                floor = root->data;
                root = root->right;
            }
            else
            {
                root = root->left;
            }
        }
        return floor;
    }
};