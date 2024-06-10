#include "bits/stdc++.h"
using namespace std;

void fibonnaci(int n)
{
    cout << "0 1 ";
    int a = 0, b = 1;
    for(int i = 0; i < n-2; i++)
    {
        int c = a+b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main()
{
    fibonnaci(8);
    return 0;
}