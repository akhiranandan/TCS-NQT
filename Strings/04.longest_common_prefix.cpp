#include "bits/stdc++.h"
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string ans;
    // lets sort the strings in lexicographical order
    sort(strs.begin(), strs.end());
    for (int i = 0; i < strs[0].size(); i++)
    {
        // now compare the first string and last string
        if (strs[0][i] == strs[strs.size() - 1][i])
        {
            ans += strs[0][i];
        }
        else
            break;
    }
    return ans;
}