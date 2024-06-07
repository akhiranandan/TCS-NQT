#include "bits/stdc++.h"
using namespace std;

bool checkPrime(int N)
{
    int sqrtN = sqrt(N);
    int count = 0;
    for(int i = 1; i <= sqrtN; i++)
    {
        if(N%i == 0)
        {
            count++;
            if(i != N/i) count++;
        }
    }
    if(count > 2) return false;
    return true;
}

int main()
{
    if (checkPrime(9)) cout << "prime";
    else cout << "not prime";
    return 0;
}