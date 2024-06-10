#include "bits/stdc++.h"
using namespace std;

int main()
{
    vector<int> arr = {1,3,6,9,12,33,46,90,111};
    int x = 111;
    int l = 0, h = 8;
    bool key = false;
    while(l <= h)
    {
        int mid = (l+h)/2;
        if(arr[mid] == x)
        {
            cout << mid;
            key = true;
            break;
        }
        else if(arr[mid] > x) h = mid-1;
        else l = mid+1;
    }
    if(!key) cout << "not present";
    return 0;
}