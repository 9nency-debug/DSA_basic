#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int nums[] = {3, 2, 1, 5,6, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int max = nums[0];
    unordered_map<int,int> mp;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int k=2;

    for(int i = 0; i < n; i++) {
        
    }
        for(int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        while(k>0) {
            int freq = mp.find(largest);
            if(freq>=1) {
                k = k -freq;
            }
            largest--;
        }        

    

    cout << secondLargest << endl;

    return 0;
}
