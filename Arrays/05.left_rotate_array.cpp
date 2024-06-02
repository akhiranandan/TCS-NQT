#include "bits/stdc++.h"
using namespace std;

void rotate(vector<int> &nums)
{
    int n = nums.size();
    int temp = nums[n-1];
    for(int i = n-1; i > 0; i--)
    {
        nums[i] = nums[i-1];
    }
    nums[0] = temp;
}


int main()
{
    vector<int> nums = {1,2,3,4,5};
    rotate(nums);
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}