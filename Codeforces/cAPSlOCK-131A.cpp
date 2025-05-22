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
            string s;
            cin>>s;
            int ans = 0 ;
     
            for (int i = 0; i < s.length(); i++)
            {
                if(s[i] < 94)
                {
                    ans++;
                }
            }
            if(ans == s.length())
            for (int i = 0; i < s.length(); i++)
            {
                s[i] += 32;
            }

            if(ans == s.length()-1 && s[0] > 94)
            {
                for (int i = 0; i < s.length(); i++)
                {
                    if(s[i] > 94)
                    {
                        s[i] -= 32;
                    }
                    else
                    {
                        s[i] += 32;
                    }
                }
                
            }
            
     
            cout<<s;
            
        }    
