#include "bits/stdc++.h"
using namespace std;

// Solution using extra array
int removeDuplicates(vector<int> &arr)
{
    int n = arr.size();
    vector<int> temp;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
            temp.push_back(arr[i]);
    }
    if (temp.size() == 0)
        return 1;
    if (arr[n - 1] != temp[temp.size() - 1])
        temp.push_back(arr[n - 1]);
    int x = temp.size();
    for (int i = 0; i < x; i++)
    {
        arr[i] = temp[i];
    }
    return x;
}

// Two pointer approach
int removeDuplicates(vector<int> &nums)
{
    // keep one pointer at 0, another at 1
    int i = 0, j = 1, n = nums.size();
    while (j < n)
    {
        // when i & j are not equal, replace i with j (remember REPLACE not swap)
        if (nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
        else
            j++;
    }
    return i + 1;
}