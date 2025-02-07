#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        /* Perform a simple preorder traversal for both the trees simontaneously
        and any tme the values differ return false */

        if (p == nullptr || q == nullptr)
        {
            return (p == q);
        }

        return (p->val == q->val) && isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};