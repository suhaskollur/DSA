#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    int r = 1;
    char ch = 'A';
    while (r <= n) {
        int c = 1;
        while (c <= n) {
            cout << ch << ' ';
            ch++;
            c++;
        }   
        cout << endl;
        r++;
    }
}