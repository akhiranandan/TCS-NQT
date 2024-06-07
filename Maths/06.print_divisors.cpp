#include "bits/stdc++.h"
using namespace std;

void printAllDivisors(int N)
{
    int sqrtN = sqrt(N);
    for(int i = 1; i <= sqrtN; i++)
    {
        if(N%i == 0)
        {
            cout << i << " ";
            if(i != N/i) cout << (int)(N/i) << " ";
        }
    }
}

int main()
{
    printAllDivisors(5);
    return 0;
}