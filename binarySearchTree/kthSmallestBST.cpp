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

/*
    first optimal solution, using o(n) TC and o(n) SC. We use an extra space for the vector and perform inorder traversal on the BST
*/
class Solution
{
public:
    void inOrderTraversal(TreeNode *root, vector<int> &v)
    {
        if (root == nullptr)
        {
            return;
        }
        // Inorder Traversal, Left Root Right
        inOrderTraversal(root->left, v);
        v.push_back(root->val);
        inOrderTraversal(root->right, v);
    }

    int kthSmallest(TreeNode *root, int k)
    {
        vector<int> v;
        inOrderTraversal(root, v);
        return v[k - 1];
    }
};

/*
    Most Optimal solution, where we use o(n) TC and o(1) SC getting rid of the extra space, using the Morris Travesal
*/
class Solution
{
public:
    void small(TreeNode *root, int &cnt, int &ans, int k)
    {
        if (root == nullptr)
            return;

        small(root->left, cnt, ans, k);
        cnt++;
        if (cnt == k)
        {
            ans = root->val;
            return;
        }
        small(root->right, cnt, ans, k);
    }

    int kthSmallest(TreeNode *root, int k)
    {
        int cnt = 0;
        int ans;
        small(root, cnt, ans, k);
        return ans;
    }
};
