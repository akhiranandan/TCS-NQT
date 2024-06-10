#include "bits/stdc++.h"
using namespace std;

string removeOuterParentheses(string s)
{
    string ans;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            if (count > 0)
            {
                ans += s[i];
                count++;
            }
            else
                count++;
        }
        else
        {
            if (count == 1)
                count--;
            else
            {
                ans += s[i];
                count--;
            }
        }
    }
    return ans;
}