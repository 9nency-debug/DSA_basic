#include<iostream>
using namespace std;

int main()
{
    int arr[] = {13,46,24,52,20,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) 
    { 
        int min = i, temp;
        for(int j = i; j < n; j++) 
        {
        if(arr[j] < arr[min]) 
        {
            min = j;
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        // else { // where arr[j] > arr[min]
        //     // for(int k = 0; k < n; k++) {
        //     //     cout << arr[k] << " ";
        //     // }
        //     // cout << endl;
        // }
    }
}
for(int k = 0; k < n; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
return 0;
}


