#include "bits/stdc++.h"
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0, n = nums.size(), ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
            count++;
        else
        {
            if (count > ans)
            {
                ans = count;
            }
            count = 0;
        }
    }
    if (count > ans)
        ans = count;
    return ans;
}