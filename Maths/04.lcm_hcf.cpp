#include "bits/stdc++.h"
using namespace std;

vector<long long> lcmAndGcd(long long A, long long B)
{
    // Euclidean theorem to find GCD
    long long a = A, b = B;
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }

    // applying the lcm formula : n1*n2 = GCD(n1,n2) * LCM(n1, n2)
    if (a == 0)
        return {(A * B) / b, b};
    else
        return {(A * B) / a, a};
}