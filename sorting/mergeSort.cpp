#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         vector<int> temp;
         int left = l;
         int right = m+1;
         
         while(left <= m && right <= r) {
             if(arr[left] < arr[right]) {
                 temp.push_back(arr[left]);
                 left++;
             }
             else {
                 temp.push_back(arr[right]);
                 right++;
             }
         }
         
         while (left <= m) {
            temp.push_back(arr[left]);
            left++;
         }
         
         while (right <= r) {
            temp.push_back(arr[right]);
            right++;
         }
         
         for (int i = l; i <= r; i++) {
             arr[i] = temp[i - l]; 
         }
         
    }

    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l >= r){
            return;
        }
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
};

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n]; 
    for( int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution solution;  // Create an instance of Solution class
    solution.mergeSort(arr, 0, n-1);  // Call mergeSort through the instance
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    delete[] arr; // deallocate the memory
    return 0;
}