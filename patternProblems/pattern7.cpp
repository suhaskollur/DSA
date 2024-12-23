#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int space = n-i;
        while (space) {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i) {
            cout << j;
            j++; 
        }

        int start = i-1;
        while (start) {
            cout << start;
            start--;
        }

        cout << endl;
        i++;
    }
}

/*

suhask@Suhass-MacBook-Air DSA % g++ pattern7.cpp
suhask@Suhass-MacBook-Air DSA % ./a.out         
4
   1
  121
 12321
1234321
suhask@Suhass-MacBook-Air DSA % 

*/