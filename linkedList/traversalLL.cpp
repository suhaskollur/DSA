#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <vector>
using namespace std;

// use class instead of struct to make use of the object oriented programming (OOP) principles of C++
class Node
{
public:
    int data;
    Node *next;

public:
    // Constructor
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr)
{   
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2LL(arr);
    Node* temp = head;
    while(temp) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}