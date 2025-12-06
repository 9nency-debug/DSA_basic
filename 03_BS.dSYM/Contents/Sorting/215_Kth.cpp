#include<iostream>
using namespace std;

int main()
{
    int nums[] = {3,2,1,5,6,4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int max = nums[0]; 
    int sl = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(nums[max] < nums[i])
        {
            max = nums[i];
        }
    }
    for(int i = 0;i < n; i++)
    {
        
        if(nums[max] == nums[max - 1])
        {
            sl = nums[max - 1];
        }
    }
    cout<<sl<<endl;
    return 0;
}