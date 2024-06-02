#include "bits/stdc++.h"
using namespace std;

int print2largest(int arr[], int n)
{
    int large = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
            large = arr[i];
    }
    int seco = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > seco && arr[i] != large)
            seco = arr[i];
    }
    return (seco != INT_MIN) ? seco : -1;
}

int main()
{
    return 0;
}