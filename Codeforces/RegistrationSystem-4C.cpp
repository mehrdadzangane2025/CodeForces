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
                   cin >> n;

                    map <string , int> mp;

                    string s;
                    
                    while (n--)
                    {
                        cin >> s;
                        if (mp.count(s) == 0)
                        {
                            cout << "OK" << endl;
                            mp[s] = 1;
                        }
                        else
                        {
                            cout << s << mp[s] << endl;
                            mp[s] += 1;
                        }
                      
                    }

        }    
