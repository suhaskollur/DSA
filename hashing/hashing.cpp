// number hashing

#include<iostream>
#include<stdio.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    // we can also use maps, as we can only declare a hash array of size 10^6 locally and utmost 10^7 globally. To avoid this
    // and extedn till 10^9, we can use maps and it is declared as below
    /*
    
    unordered_map<int, int> mpp;
    for(int i=0; i<n; i++) {
        mpp[arr[i]]++;
    }
    
    */

    //precompute
    int hash[13] = {0};
    for(int i = 0; i<n; i++) {
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        //fetch
        cout << hash[number] << endl;
        /*
         while using maps, 
         cout << mpp[number] << endl;
        */
    }
    return 0;
}