#include <iostream>
#include <unordered_map>
#include <stdio.h>
using namespace std;


class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        unordered_map<int, int> mpp;
        int maxlen = 0;
        int left = 0;
        int right = 0;
        int n = arr.size();
        
        while(right < n) {
            mpp[arr[right]]++;
            if(mpp.size() > 2) {
                mpp[arr[left]]--;
                if(mpp[arr[left]] == 0) {
                    mpp.erase(arr[left]);
                }
                left++;
            }
            if(mpp.size() <= 2) {
                maxlen = max(maxlen, right - left + 1);
            }
            right++;
        }
        return maxlen;
    }
    
};