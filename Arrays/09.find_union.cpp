#include "bits/stdc++.h"
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    set<int> st;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        st.insert(arr2[i]);
    }
    int x = st.size();
    for (auto it : st)
    {
        ans.push_back(it);
    }
    return ans;
}

int main()
{
    return 0;
}
