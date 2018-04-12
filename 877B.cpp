#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    vector<int> pos,pos1;
    int ca=0,cb=0,la=-1,lb=-1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        {
            ca++;
            la=i;
            pos.pb(i);
        }
        else
        {
            cb++;
            lb=i;
            pos1.pb(i);
        }
    }
    if(la==-1)
    {
        cout<<cb;
        return 0;
    }
    else if(lb==-1)
    {
        cout<<ca;
        return 0;
    }
    int ans1=0,ans2=0;
    for(int j=0;j<pos.size();j++)
    {
        int cnt=0;
        for(int i=pos[j]+1;i<s.length();i++)
        {
            if(s[i]=='b')
                cnt++;
        }
        ans1 = max(ans1,cnt+j+1);
    }
    for(int j=0;j<pos1.size();j++)
    {
        int cnt=0;
        for(int i=pos1[j]+1;i<s.length();i++)
        {
            if(s[i]=='a')
                cnt++;
        }
        ans2 = max(ans2,cnt+j+1);
    }
    int fin = max(ca,cb);
    fin = max(ans1,max(fin,ans2));
    int tp = pos.size();
    for(int i=0;i<pos.size()-1;i++)
    {
        for(int k=i+1;k<pos.size();k++)
        {
            //cout<<fin<<endl;
            //cout<<pos[i]<<" "<<pos[k]<<endl;
            fin = max(fin,(i+1)+(tp-k)+(pos[k]-pos[i]-1)-(k-i-1));
        }
    }
    cout<<fin;
    return 0;
}