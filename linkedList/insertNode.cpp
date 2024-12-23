#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val, Node* next1) {
        data = val;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *convertArr(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* insertHead(Node* head, int val) {
    Node* temp = new Node(val, head);
    return temp;
}

Node* insertTail(Node* head, int val) {
    if(head == nullptr) {
        return new Node(val);
    }
    Node* temp = head;
    while (temp -> next != nullptr) {
        temp = temp -> next;
    }
    Node* newNode = new Node(val, nullptr);
    temp -> next = newNode;
    return head;
}

Node* insertNode(Node* head, int val, int k) {
    if(head == nullptr) {
        if(k == 1){
        return new Node(val, nullptr);
        }
    }
    if(k == 1) {
        Node* temp = new Node(val, head);
        return temp;
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != nullptr) {
        cnt++;
        if(cnt == k-1) {
            Node* newNode = new Node(val);
            newNode -> next = temp -> next;
            temp -> next = newNode;
            return head;
        }
        temp = temp -> next;
    }
}

Node* insertElement(Node* head, int ele, int val) {
    if(head == nullptr) {
        return nullptr;
    }
    if(head -> data == val) {
       return new Node(ele, head);

    }

    Node* temp = head;
    while(temp -> next != nullptr) {
        if(temp -> next -> data == val) {
            Node* newNode = new Node(ele, temp -> next);
            temp -> next = newNode;
            break;
            return head;
        }
        temp = temp -> next;
    }
}

int main()
{
    vector<int> arr = {2, 5, 6, 9, 7};
    Node *head = convertArr(arr);
    head = insertHead(head, 100);
    print(head);
}