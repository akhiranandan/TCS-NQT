#include "bits/stdc++.h"
using namespace std;

bool armstrongNumber(int n)
{
    int digits = 0, temp = n, sum = 0;
    while(temp != 0)
    {
        digits++;
        temp = temp/10;
    }
    temp = n;
    while(temp != 0)
    {
        sum = sum + pow(temp%10, digits);
        temp = temp/10;
    }
    cout << "digits: " << digits << " , " << "sum: " << sum << "\n";
    if(sum == n) return true;
    else return false;
}

int main()
{
    int n = 371;
    if(armstrongNumber(n)) cout << "\nARMSTRONG NUMBER!";
    else cout << "NOT ARMSTRONG NUMBER!";
    return 0;
}