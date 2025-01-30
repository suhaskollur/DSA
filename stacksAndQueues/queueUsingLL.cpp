#include <iostream>
#include <string>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};

//Function to push an element into the queue.
void MyQueue:: push(int x)
{
        QueueNode* temp = new QueueNode(x);
        if(front == nullptr) {
            front= rear = temp;
        }
        else {
            rear -> next = temp;
            rear = temp;
        }
        
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        if(front == nullptr) {
            return -1;
        }
        int ele = front -> data;
        QueueNode* temp = front;
        front = front -> next;
        delete temp;
        return ele;
}
