#include "bits/stdc++.h"
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n <= 0)
        return false; // since negative numbers cannot be powers of two anyways 
    return (n & (n - 1)) == 0;
}