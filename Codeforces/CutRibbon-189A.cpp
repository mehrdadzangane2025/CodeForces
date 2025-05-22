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
    int n;
cin>>n;
int a[3];
cin>>a[0]>>a[1]>>a[2];
sort(a, a+3);
int ans = 0;

int answer = 0;
if(a[0] == a[1]&& a[1] == a[2])
{
    answer = n/a[0];
    cout<<answer;
    return 0;
}

if(n % a[0] == 0)
{
    answer = n / a[0];
    cout<<answer;
    return 0;
}
else
{
    
    
    int sum = 0;
    ans = 0;
    int y = 0;
    int u = 1;
    int ss = 2;
    int z =1;
    int g = 0;
    int f = 1;
    while(true){
        
        sum = (a[u] * z) + (a[y] * (f-1)) + (a[ss] * g);

        if(n == sum)
        {
            
            ans = z + (f-1) + g;
            sum = 0;
            answer = max(ans, answer);
            ans = 0;
        }
        else if(sum > n)
        {
            sum = 0;
            f = 0;
            z++;
        }
        if(a[u] * z > n){
            z = 0;
            g++;
        }

        if((a[u] * z) + (a[y] * (f-1)) + (a[ss] * g) > n && g > 1)
        {
            break;
        }
        f++;
    }

}
cout<<answer;

}
