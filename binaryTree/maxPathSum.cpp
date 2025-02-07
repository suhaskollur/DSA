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
    int maxPathSum(TreeNode *root)
    {

        if (!root)
            return 0;

        int maxx = INT_MIN;
        maxPath(root, maxx);
        return maxx;
    }

private:
    int maxPath(TreeNode *node, int &maxx)
    {
        if (node == nullptr)
        {
            return 0;
        }

        int lh = max(0, maxPath(node->left, maxx));
        int rh = max(0, maxPath(node->right, maxx));
        maxx = max(maxx, node->val + lh + rh);

        return (node->val) + max(lh, rh);
    }
};