#include "bits/stdc++.h"
using namespace std;

int main()
{
    string s = "abracadabr";
    int n = s.length();
    for(int i = 0; i < (n/2); i++)
    {
        char c = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = c;
    }
    cout << s;
    return 0;
}