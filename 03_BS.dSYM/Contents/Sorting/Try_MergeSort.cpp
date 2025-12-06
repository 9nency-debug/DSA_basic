#include<iostream>
using namespace std;
int main()
{
    int arr1[] = {1,2,4};
    int arr2[] = {1,3,4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[n1 + n2];
    int i=0,j=0;

    while(i<n1 && j<n2) {
        if(i==j) {
            merged[i+j];
            i++;
            j++;
        }
        else {
            break;
        }
    }
    cout<<" ";
    for(int k = 0;k<=n-1;k++) {
        cout<<merged[k]<<endl;
    }
    return 0;
}
