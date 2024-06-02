#include "bits/stdc++.h"
using namespace std;

int largest(vector<int> &arr, int n)
{
    int large = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
            large = arr[i];
    }
    return large;
}

int main()
{
    return 0;
}