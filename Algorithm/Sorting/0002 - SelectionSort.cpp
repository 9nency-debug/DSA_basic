/* Selection Sort Algorithm */

#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 1, 6, 7, 2, 3, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size - 1; i++) {
        int minInd = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minInd]) {
                minInd = j;
            }
            else {
                continue;
            }
        }
        if(minInd != i) {
            swap(arr[i], arr[minInd]);
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
