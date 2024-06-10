#include "bits/stdc++.h"
using namespace std;

int main()
{
    string num = "35427";
    int n = num.length();
    string ans;
    for (int i = n - 1; i >= 0; i--)
    {
        int x = num[i] - '0';
        if (x % 2 != 0) {
            ans = num.substr(0, i + 1);
            break;
        }
    }
    cout << ans;
    return 0;
}