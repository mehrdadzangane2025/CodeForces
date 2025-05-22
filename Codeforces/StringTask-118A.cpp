#include <iostream>
#include<algorithm>
#include<cmath>
#include <map>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'Y' ||s[i] == 'y' ||s[i] == 'E' ||s[i] == 'e' ||s[i] == 'I' ||s[i] == 'i' ||s[i] == 'U' ||s[i] == 'u' ||s[i] == 'O' ||s[i] == 'o' ||s[i] == 'a' ||s[i] == 'A')
        {
            continue;
        }
        else
        {
            if(s[i] < 94)
            {
                s[i] +=32;
            }
            cout<<'.'<<s[i];
        }
    }
    
}
