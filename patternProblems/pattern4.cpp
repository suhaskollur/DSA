#include <iostream>
using namespace std;

int main () {

    int r, c;
    cin >> r >> c;

    int i = 1;
    int count = 1;
    while (i <= r) {
        int j = 1;
        while (j <= c) {
            cout << count << ' ';
            count++;
            j++;
        }
        cout << endl;
        i++;
        
    }
}