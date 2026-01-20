#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    int swapCount = 0;

    for(int i = 0; i < n; i++) {
        bool swapped = false;

        for(int j = 0; j < n - i - 1; j++) { 
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
                swapCount++;
            }
        }

        if(!swapped) break; 
    }

    cout << "Sorted Array: ";
    for(int x : arr)
        cout << x << " ";
    cout << endl;

    cout << "Total Swaps: " << swapCount << endl;
}

int main() {
    vector<int> arr = {5, 1, 4, 2, 8};
    bubbleSort(arr);
    return 0;
}
