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

    int n, l;
    cin>>n>>l;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    double sum = 0;
    double ans2;
    for(int i = 0 ; i < n-1; i++)
    {
        double y = ((double)(a[i+1] - a[i])/2);
        if(sum<y)
        {
            sum = y;
        }
    }
    ans2 = a[0];
    double ans3 = l - a[n-1];
    double ans = max(ans2, ans3);
    ans = max(ans, sum);
    cout.precision(10);
    cout << fixed << ans << endl;
}
