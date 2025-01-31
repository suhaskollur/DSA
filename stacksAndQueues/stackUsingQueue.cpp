#include <iostream>
#include <string>
using namespace std;

class MyStack {

private:
    std::queue<int> q;

public:
    MyStack() {}
    
    void push(int x) {
        q.push(x);
        for(int i = 0; i < q.size()-1; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int tope = q.front();
        q.pop();
        return tope;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};