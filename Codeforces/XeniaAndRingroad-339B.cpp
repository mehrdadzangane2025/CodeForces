#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
#include <string>
using namespace std;
#define len(n)  n.length()
#define ll long long
#define siz(x)  (int)x.size()
typedef pair<int, int> pairs;
int main()
{
    ll n, m;
    cin>>n>>m;
    ll a[m];
    for(ll i = 0 ; i < m; i++)
    {
        cin>>a[i];
    }
    ll flag = a[0];
    ll ans =0;
    if(a[0] != 1){
        ans = a[0] - 1;
    }
    for(ll i = 1 ; i < m ; i++)
    {
        ll sum =0;
        if(a[i] == flag)
        {
            sum = 0;

        }
        else if(a[i] > a[i-1])
        {
            sum = a[i] - flag;
            flag = a[i];
        }
        else if(a[i] < a[i-1])
        {
            sum = n - a[i-1];
            sum += a[i];
            flag = a[i];
        }
        ans += sum;

    }
    cout<<ans;
}
