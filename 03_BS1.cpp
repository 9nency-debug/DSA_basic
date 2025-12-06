#include<iostream>
using namespace std;

int main() {

    int arr[] = {1,2,3,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = n - 1;

    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] < arr[mid + 1]) 
        {
            low = mid + 1;
        }
        else //if(arr[mid] > arr[mid + 1]) 
        {
            high = mid;
        }
    }
    cout << "Peak element is at index: " << low << endl;
    return 0;
}