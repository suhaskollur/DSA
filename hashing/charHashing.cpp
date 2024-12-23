#include<iostream>
#include<stdio.h>
using namespace std;

int main () {

    string s;
    cin >> s;

    //precompute
    int hash[26] = {0};
    for(int i=0; i<s.size(); i++) {
        hash[s[i] - 'a']++; // if only lower case letters are considered
        // otherwise, 
        // hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        //fetch
        cout << hash[c - 'a'] << endl;
        // the above condition is for when only lower case alphabets are mentioned, if upper case alphabets are also 
        // considered then the code will be like this 

        // cout << hash[c] << endl; 
    }

    return 0;
}