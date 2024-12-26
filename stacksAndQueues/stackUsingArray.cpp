//{ Driver Code Starts
#include <iostream>
#include <string>
using namespace std;

class MyStack {
  private:
    int arr[1000];
    int top;

  public:
    MyStack() { top = -1; }

    int pop();
    void push(int);
    int rtop();
};


// } Driver Code Ends
// Function to push an integer into the stack.

/*
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
*/

void MyStack ::push(int x) {
    if(top >= 1000) {
        cout << "Exceeded\n";
        return;
    }
    top = top + 1;
    arr[top] = x;
}

// Function to remove an item from top of the stack.
int MyStack ::pop() {
    if(top < 0) {
        return -1;
    }
    int x = arr[top];
    top = top - 1;
    return x;
}

int MyStack ::rtop() {
    if(top == -1) {
        return -1;
    } else {
        return arr[top];
    }
}