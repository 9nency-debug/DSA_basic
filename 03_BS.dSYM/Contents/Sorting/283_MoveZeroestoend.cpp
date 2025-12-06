#include<iostream>
using namespace std;

int main() {

    int arr[] = {0,1,0,3,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = n - 1;
    int temp;

    while( low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == 0) {
            high = mid - 1;
            swap(arr[mid], arr[high]);
            // temp = arr[mid]
            // arr[mid] = arr[high];
            // arr[high] = temp;
        } 
        else if(arr[mid] !=0)
        {
            low = mid + 1;
            swap(arr[mid] , arr[low]);
        }
}
    for(int k = 0; k < n; k++) {

        cout << arr[k] << " ";
    }
    cout << endl;
        return 0;
    }