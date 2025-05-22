            #include <iostream>
             #include<algorithm>
            #include<cmath>
            using namespace std;
             
            int main()
            {
                long long n, m, a, ans;
                cin>>n>>m>>a;
                ans = ceil((double)m/a) * ceil((double)n/a);
                cout<<ans;
            }
