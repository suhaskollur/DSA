#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "enter the number: " << endl;
    cin >> num;

    int i = 2;
    bool b;
    while (i < num)
    {
        if ((num % i) == 0)
        {
            b = true;
            break;
        }
        i = i+1;
    }

    if (b == true)
    {
        cout << " Not Prime " << endl;
    } else {
        cout << " Prime " << endl;
    }
}