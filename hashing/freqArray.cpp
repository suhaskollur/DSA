#include <iostream>
#include <stdio.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    void freqCount(vector<int>& arr, int N, int P)
    {
        unordered_map<int, int> mpp;
        for (int i = 0; i < N; i++)
        {
            mpp[arr[i]]++;
        }

        for (int i = 0; i < N; i++)
        {
            arr[i] = mpp[i + 1];
        }
    }
};