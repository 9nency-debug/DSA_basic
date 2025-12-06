#include<iostream>
using namespace std;

    int maxSubarray(int arr[], int n) {
        int maxSum = -1000000000;

        for(int i = 0; i < n; i++) {
            int Sum = 0;
            for(int j = 1; j < n; j++) {
                sum += arr[j];
                if(sum > maxSum)
                maxSum = sum;
            }
        }
        return maxSum;
    }

    int main() {
        int main() { 
        int arr[] = {-2,1,-3,4,-1,2,1,-5,4}; 
        int n = sizeof(arr) / sizeof(arr[0]);
    }

