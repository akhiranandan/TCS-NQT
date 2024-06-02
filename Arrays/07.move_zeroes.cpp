#include "bits/stdc++.h"
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int i = 0, n = nums.size();
    while (i < n - 1)
    {
        if (nums[i] == 0)
        {
            int j = i + 1;
            while (j < n - 1 && nums[j] == 0)
                j++;
            nums[i] = nums[j];
            nums[j] = 0;
            i++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    return 0;
}