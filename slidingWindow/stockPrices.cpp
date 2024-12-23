#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int res = 0;
//         for(int i = 0; i < prices.size() - 1; i++) {
//             for(int j = i+1; j < prices.size(); j++) {
//                 if(prices[j] > prices[i]) {
//                     if(prices[j] - prices[i] > res) {
//                         res = prices[j] - prices[i];
//                     }
//                 }
//             }
//         }
//         return res;
//     }
// };

//this is a O(n^2) approach and would lead to Time limit exceeded error.

// OPTIMAL SOLUTION
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;
        for (int price : prices) {
            min_price = min(min_price, price);
            max_profit = max(max_profit, price - min_price);
        }
        return max_profit;
    }
};
