#include "bits/stdc++.h"
using namespace std;

pair<int, int> get(int a, int b)
{
    a = a ^ b;
    b = a ^ b; // ---> (a^b)^b ---> a
    a = a ^ b; // ---> (a^b)^a ---> b
    return {a, b};
}