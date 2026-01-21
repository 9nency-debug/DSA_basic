#include<iostream>
using namespace std;

int maxSubarray(int arr[], int n) {
    int maxSum = -1000000000;

    for(int i = 0; i < n; i++) {
        int sum = 0; // corrected variable
        for(int j = i; j < n; j++) { // start from i
            sum += arr[j];
            if(sum > maxSum)
                maxSum = sum;
        }
    }
    return maxSum;
}

int main() { 
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Max Subarray Sum: " << maxSubarray(arr , n) << endl;
    return 0;
}


