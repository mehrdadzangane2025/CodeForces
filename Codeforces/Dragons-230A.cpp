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
#define forLoop(len) for (int i = 0; i < len; i++)
int main()
{
    int s, n;
    cin>>s>>n;
    int x, y;
    set<int,int> ss;
    vector<pairs> v;
    forLoop(n)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    // Sort above vector v
    sort(v.begin(), v.end());

        /**cout << i.first << ": " << i.second
      		<< endl;
      		*/

    for (auto i : v)
    {

        if(i.first >= s)
        {

            cout<<"NO";
            return 0;
        }
        else
        {

            s+= i.second;
        }
    }
    cout<<"YES";
}
