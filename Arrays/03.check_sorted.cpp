#include "bits/stdc++.h"
using namespace std;

bool check(vector<int> &arr)
{
    int n = arr.size();
    int check = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            check++;
    }
    if (check == 0)
        return true;
    else if (check == 1)
    {
        if (arr[n - 1] <= arr[0])
            return true;
        else
            return false;
    }
    else
        return false;
}