#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int t='a';
  if(s[0]!='a')
    {
        cout<<"NO";
        return 0;
    }
    else
    {
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==t+1|| s[i]<=t)
            {
                if(s[i]==t+1)
                    t++;
            }
            else
            {
                cout<<"NO";
                return 0;
            }
        }

    }
    cout<<"YES";
    return 0;
}