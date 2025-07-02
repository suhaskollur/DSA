#include <iostream>
using namespace std;

int main()
{
    // cout << "Hello World" << endl ; // '\n' can also be used instead of endl
    int n;
    cin >> n;

    int sum = 0;
    int i = 0;
    while (i <= n)
    {
        sum = sum + i;
        i = i+2;
    }

    cout << sum;
}

/*

typecasting

int a = 'a';
cout << a << end;    -> 97

char ch = 98;
cout << ch << endl;  -> b

*/

// testing out pull requests and merge conflicts
