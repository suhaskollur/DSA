#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int* prevSmaller(int* A, int n1, int* len1) {
    stack<int> st;
    int* nse = new int[n1];

    for (int i = 0; i < n1; i++) { 
        while (!st.empty() && st.top() >= A[i]) { 
            st.pop();
        }
        nse[i] = st.empty() ? -1 : st.top(); 
        st.push(A[i]);
    }

    *len1 = n1;
    return nse;
}