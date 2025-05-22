                #include <iostream>
                #include<algorithm>
                #include<cmath>
                #include <map>
                using namespace std;
                int main()
                {
                    string s;
                    cin>>s;
                    bool a = false;
                    int ans =0;
                    for (int i = 0; i < s.length(); i++)
                    {
                        if(s[i] == 'h' && ans == 0)
                        {
                            ans = 1;
                        }

                        else if(s[i] == 'e' && ans==1)
                        {
                            ans = 2 ;
                        }

                        else if(s[i] == 'l' && ans==2)
                        {
                            ans = 3;
                        }
                        else if(s[i] == 'l' && ans == 3)
                        {
                            ans =4;
                        }

                        else if(s[i] == 'o' && ans==4)
                        {
                            ans= 5;
                        }
                    }
                    if(ans == 5)
                    cout<<"YES";
                    else
                    cout<<"NO";
     
                }
