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
const int maxp = 1000000;
bool prime[maxp];
void isprime()
{
    prime[0] = true; 
    
    prime[1] = true;
    
    for (int i = 4 ; i <= maxp; i +=2)
    {
        prime[i] = true;
    }
    for (int i = 3 ; i <= sqrt(maxp) ; i += 2)
    {
        if (prime[i] == false)
        {
            for (int j = i * i ; j <= maxp ; j += 2*i)
            {
                prime[j] = true;
            }
        }
    }
}
int main()
{

    int t;
    ll n,sq;

    isprime();

    cin>>t;

    while (t--)
    {

        cin>>n;

        sq = sqrt(n);

        if(prime[sq] == false && sq * sq == n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
