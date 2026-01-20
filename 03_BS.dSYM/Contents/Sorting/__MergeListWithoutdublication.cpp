#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeUnique(int arr1[], int n1, int arr2[], int n2) {
    vector<int> merged;
    int i = 0, j = 0;

    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            if(merged.empty() || merged.back() != arr1[i])
            merged.push_back(arr1[j]);
            i++;
        } 
        else if(arr1[i] > arr2[j]) {
            if(merged.empty() || merged.back() != arr2[j])
            merged.push_back(arr2[j]);
            j++;
        }
        else {
            if(merged.empty() || merged.back() != arr1[i])
            merged.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while(i < n1) 
    {
        if(merged.empty() || merged.back() != arr1[j])
        merged.push_back(arr1[j]);
        i++;
    }
    while(j < n2) {
        if(merged.empty() || merged.back() != arr2[j])
        merged.push_back(arr2[j]);
        j++;
    }
    return merged;
}

int main() {
    int arr1[] = {1, 2, 2, 4};
    int arr2[] = {2, 3, 4, 5};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> result = mergeUnique(arr1, n1, arr2, n2);

    cout << endl;
    for(int x : result)
    cout << x <<" ";
    cout << endl;

    return 0;
}