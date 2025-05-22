     
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
                int d;
                int a[4] = {0,0,0,0};
         
                for(int i = 0; i < n; i++)
                {
                    cin>>d;
                    if(d==1)
                    a[0]++;
                    if(d==2)
                    a[1]++;
                    if(d ==3)
                    a[2]++;
                    if(d==4)
                    a[3]++;
                }
                int ans=0;
                ans += a[3];
                    // cout<<a[0];
                    // cout<<a[1];
                    // cout<<a[3];
                while(a[2]>0)
                {
                    if(a[0] == 0)
                    a[0] = 0;
                    else
                    a[0]--;
         
                    ans++;
                    a[2]--;
         
         
                }
         
                    if(a[1] > 0)
                    {

                        ans += ceil((double)a[1] / 2);
                        if(a[1] % 2 == 1 && a[1] >= 1)
                        {
                            if(a[0] > 2)
                            a[0] -= 2;
                            else
                            a[0] = 0;
                        }
                    }

                    ans += ceil((double)(a[0])/4);
                    cout<<ans;
                
         
            }    
