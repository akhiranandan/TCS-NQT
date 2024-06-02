#include "bits/stdc++.h"
using namespace std;

int searchInSorted(int arr[], int N, int K)
{

    int l = 0, h = N - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == K)
            return 1;
        else if (arr[mid] > K)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main()
{
    return 0;
}