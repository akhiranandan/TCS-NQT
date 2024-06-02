#include "bits/stdc++.h"
using namespace std;

// Using an extra array
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    if (n == 0 || n == 1)
        return;
    vector<int> temp;
    k = k % n;
    for (int i = n - k; i < n; i++)
    {
        temp.push_back(nums[i]);
    }
    for (int i = n - k - 1, j = n - 1; i >= 0; i--, j--)
    {
        nums[j] = nums[i];
    }
    for (int i = 0; i < k; i++)
    {
        nums[i] = temp[i];
    }
}

// some sort of sorcery
void rotate(vector<int> &nums, int k)
{
    k = k % nums.size();
    // reverse the last k numbers
    reverse(nums.begin() + (nums.size() - k), nums.end());
    // reverse the rest of the numbers at the beginning
    reverse(nums.begin(), nums.begin() + (nums.size() - k));
    // now reverse the entire array
    reverse(nums.begin(), nums.end());
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    rotate(arr, 3);
    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}