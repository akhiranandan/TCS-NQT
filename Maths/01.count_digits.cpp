#include "bits/stdc++.h"
using namespace std;

int main()
{
    int N = 22074;
    int temp = N, count = 0;
    while (temp > 0)
    {
        int x = temp % 10;
        if(x != 0 && N%x == 0) count++;
            count++;
        temp = temp / 10;
    }
    cout << count;
    return 0;
}