#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

string result (string s) {

    int l = 0;
    int r = s.length() - 1;

    string ans = "";
    string temp = "";

    while(l <= r) {
        char ch = s[l];
        if(ch != ' ') {
            temp += ch;
        } else if(s[l] == ' ') {
            if( ans != "") {
                ans = temp + ' ' + ans;
            } else {
                ans = temp;
            }
            temp = "";
        }
        l++;
    }


    if(temp != "") {
        if(ans != "") {
            ans = temp + " " + ans;
        } else {
            ans = temp;
        }
    }
    return ans;
}

int main () {
    string st="TUF is great for interview preparation";
    cout<<"Before reversing words: "<<endl;
    cout<<st<<endl;
    cout<<"After reversing words: "<<endl;
    cout<<result(st) << endl;
    return 0;
}

// TC = O(n)
// SC = O(1) as we r not making use of a stack to store the words