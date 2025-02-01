#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

struct Item{
    int value;
    int weight;
};

class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    bool static comp (Item a, Item b) {
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        if(r1 > r2) {
            return true;
        } else {
            return false;
        }
    }
    
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // Your code here
        int n = val.size();
        vector<Item> items(n);
        
        for (int i = 0; i < n; i++) {
            items[i] = {val[i], wt[i]};
        }
        
        sort(items.begin(), items.end(), comp);
        
        double totalValue = 0.0;
        int currentWeight = 0;
        
        for(int i = 0; i < n; i++) {
            if(currentWeight + items[i].weight <= capacity) {
                totalValue += items[i].value;
                currentWeight += items[i].weight;
            } else {
                int remainingWeight = capacity - currentWeight;
                totalValue += (items[i].value * ((double)remainingWeight / items[i].weight));
                break;
            }
        }
        return totalValue;
    }
};