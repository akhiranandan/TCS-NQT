#include "bits/stdc++.h"
using namespace std;

string reverseWords(string s)
{
    string ans, word;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            word += s[i];
        }
        else
        {
            if (word.length() != 0)
            {
                if (ans.length() == 0)
                    ans = word;
                else
                    ans = word + ' ' + ans;
            }
            word = "";
        }
    }
    if (word.length() != 0)
    {
        if (ans.length() == 0)
            ans = word;
        else
            ans = word + ' ' + ans;
    }
    return ans;
}