#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {3, 2, 1, 5, 6, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 2;

    for(int count = 1; count < k; count++) {
        int largest = INT_MIN;
        int index = -1;

        for(int i = 0; i < n; i++) {
            if(nums[i] > largest) {
                largest = nums[i];
                index = i;
            }
        }
        nums[index] = INT_MIN;
    }

    int kth = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(nums[i] > kth)
            kth = nums[i];
    }

    cout << kth << endl;
}
