#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//this function removes non-alphanumeric letters and checks for the condition

bool isPalindrome(string s) {

    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        if( !isalnum(s[left]) ) {
            left++;
        } else if( !isalnum(s[right])) {
            right--;
        } else if( s[left] != s[right]) {
            return false;
        } else {
            left++;
            right--;
        }
    }

    return true;
}