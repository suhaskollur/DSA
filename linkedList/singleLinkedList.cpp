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

    // Default constructor
    Node(int d) {
        data = d;
        next = nullptr;
    }
};

int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node *y = new Node(arr[0], nullptr);
    cout << y->data;
    // Node y = Node(arr[0], nullptr);   This is basically just creating an object
    // cout << y.data << y.next;
}