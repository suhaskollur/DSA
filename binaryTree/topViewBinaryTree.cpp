#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>
using namespace std;
using namespace std;

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution {
  public:
    vector<int> topView(Node *root) {
        vector<int> ans;
        if(root == nullptr) {
            return ans;
        }
        map<int, int> mpp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()) {
            auto it = q.front();
            q.pop();
            Node* node = it.first;
            int line = it.second;
            if(mpp.find(line) == mpp.end()) mpp[line] = node -> data;
            
            if(node -> left != nullptr) {
                q.push({node -> left, line - 1});
            }
            if(node -> right != nullptr) {
                q.push({node -> right, line + 1});
            }
        }
        
        for(auto it : mpp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};