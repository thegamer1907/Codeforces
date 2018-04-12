#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll a,b,tot;
    cin>>a>>b;
    string p,t;
    cin>>p>>t;
    int fin = INT_MAX;
    vector<int> t1,t2;
    for(int i=0;i<=t.length()-p.length();i++)
    {
        tot=0;
        for(int j=0,k=i;j<p.length();j++,k++)
        {
            if(p[j]!=t[k])
            {
                tot++;
                t1.push_back(j);
            }
        }
        if(tot<fin)
        {
            t2.clear();
            fin=tot;
            for(int i=0;i<t1.size();i++)
            {
                t2.push_back(t1[i]);
            }
        }
        t1.clear();
    }
   cout<<fin<<endl;
   for(int i=0;i<t2.size();i++)
    cout<<t2[i]+1<<" ";
}