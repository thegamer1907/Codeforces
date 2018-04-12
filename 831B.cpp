#include<bits/stdc++.h>

using namespace std;


int main()
{
   string a,b;
   cin>>a>>b;
   map<char,char> mp;
   for(int i=0;i<a.length();i++)
   {
       mp[a[i]] = b[i];
   }
   string c;
   cin>>c;
   for(int i=0;i<c.length();i++)
   {
       if(c[i] >='0' && c[i]<='9')
         cout<<c[i];
       else
       {
        if(c[i] >='A' && c[i]<='Z')
        {
            c[i] = tolower(c[i]);
            c[i] = mp[c[i]];
            c[i] = toupper(c[i]);
            cout<<c[i];
        }
        else
        {
             cout<<mp[c[i]];
        }
       }
   }
}