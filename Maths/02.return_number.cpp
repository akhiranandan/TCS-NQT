#include "bits/stdc++.h"
using namespace std;

int reverse(int x)
{
    long long num = 0;
    while (x != 0)
    {
        num = num * 10 + (x % 10);
        x = x / 10;
        if (num > INT_MAX || num < INT_MIN)
            return 0;
    }
    return num;
}

int main()
{
    return 0;
}