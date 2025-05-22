#include<bits/stdc++.h>
#include <iostream>
#include<algorithm>
#include<cmath>
#include <map>
#include <string>

using namespace std;

#define len(n)  n.length()
#define ll long long
#define siz(x)  (int)x.size()
int main()
{
    int n;
    cin>>n;
    int s;
    int g =0;
    string sa = "";
    int a[n],sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        s = a[i]%2;
        sa += to_string(s);
        
    }
    int ans = 0;


    for (int i = 0; i < sa.length(); i++)
    {
        if(sa[i] != sa[i+1] && (g ==1))
        {
            ans = i+1;
            
            cout<<ans;
            break;
        }
        else if(sa[i] == sa[i+1] && g == 1)
        {
            ans = 1;
            cout<<ans;
            break;
            
        }
        else if(sa[i] != sa[i+1])
        {
             g = 1;
        }
    }
    



}    
