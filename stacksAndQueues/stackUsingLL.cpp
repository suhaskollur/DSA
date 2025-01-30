//{ Driver Code Starts
#include <iostream>
#include <string>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;

    StackNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyStack {
  private:
    StackNode *top;

  public:
    int size = 0;
    void push(int x) {
        StackNode* temp = new StackNode (x);
        temp -> next = top;
        top = temp;
        size = size + 1;
    }

    int pop() {
        if(top == nullptr) {
            return -1;
        } else {
            StackNode* temp = top;
            top = top -> next;
            int elem = temp -> data;
            delete temp;
            return elem;
        }
        size = size - 1;
    }

    MyStack() { top = NULL; }
};