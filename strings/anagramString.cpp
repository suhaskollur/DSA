#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string str1, string str2) {

        if (str1.length() != str2.length())
            return false;

        int freq[26] = {0};

        for (int i = 0; i < str1.length(); i++) {
            freq[str1[i] - 'a']++;
        }

        for (int i = 0; i < str2.length(); i++) {
            freq[str2[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0)
                return false;
        }

        return true;
    }
};

// O(n), as we are using a hash map to compute the freq, instead of sorting the string which would result in a O(nlogn)