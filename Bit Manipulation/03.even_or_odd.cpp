#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n = 130;
    // when you do- n XOR 1, since even numbers have LSB as 0, it will give you n+1.
    // if it is not n+1, then it is odd number
    if((n^1) == n+1) cout << "even";
    else cout <<"odd";
    return 0;
}