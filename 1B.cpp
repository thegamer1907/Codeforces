#include<bits/stdc++.h>
#include<string>
#define ll long long int
#define mod 1000000007
using namespace std;


vector<char> a1(27);
map<char,ll> mp;
void init1()
{
    for(char i='A';i<='Z';i++)
    {
        a1[i-'A'+1] = i;
        if(1)
            mp[i] = i-'A'+1;
    }
    a1[0] = a1[26];
}

int main()
{
  init1();
  int t;
  cin>>t;
  while(t--)
  {
      string a;
      cin>>a;
      int flag=0;
      int c=1;
      int type=0;
      for(int i=0;i<a.length();i++)
      {
          if(!isdigit(a[i]) && flag==1)
          {
              type=1;
          }
          else if(isdigit(a[i]))
          {
              flag=1;
          }
      }
      if(type==0)
      {
          //BC23
          int pos;
          for(int i=0;i<a.length();i++)
          {
              if(isdigit(a[i]))
              {
                  pos=i;
                  break;
              }
          }
          ll ans=0;
          for(int i=pos-1,j=0;i>=0;i--,j++)
          {
              ans+= ((mp[a[i]])*pow(26,j));
              //cout<<mp[a[i]]<<" "<<pow(26,j)<<endl;
          }
          //cout<<ans<<endl;
          cout<<"R"<<a.substr(pos,a.length()-pos)<<"C"<<ans<<endl;
      }
      else
      {
          //R23C55
          int flag=0;
          int c=1;
          int pos,bpos;
          for(int i=0;i<a.length();i++)
          {
             if(!isdigit(a[i]) && flag==1)
             {
                bpos=i;
                break;
             }
             else if(isdigit(a[i]) && flag==0)
             {
                pos=i;
                flag=1;
             }
          }
          int pos2;
          for(int i=bpos;i<a.length();i++)
          {
              if(isdigit(a[i]))
              {
                  pos2=i;
                  break;
              }
          }
          int p = stoi(a.substr(pos2,a.length()-pos2),nullptr);
          char ans[100];
          int c1=-1;
          while(p)
          {
              c1++;
              ans[c1] =  a1[p%26];
              if(p%26!=0)
                p/=26;
              else
               {
                   p/=26;
                   p--;
               }
          }
          for(int i=c1;i>=0;i--)
           cout<<ans[i];
          for(int i=pos;i<bpos;i++)
           cout<<a[i];
          cout<<"\n";
      }
  }
}