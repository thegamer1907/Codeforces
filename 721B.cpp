#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,sum=0,x=0,p=0,ct=0;
    string s,a;
    int low=0,high=0;
    cin>>n>>k;
    vector<pair<int,string> >v;
    for(i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(make_pair(s.size(),s));
    }
    cin>>a;
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        if(x==k)
        {
            sum+=5;
            x=0;
        }
        if(v[i].first==a.size()&&p==0)
        {
            p=1;
            low=sum+1;
        }
        else
            if(v[i].first<a.size()&&x<k)
            {
                sum++;
                x++;
            }
        if(p==1)
        {
            while(v[i].first==a.size()&&i<n)
            {
                if(x==k)
                {
                    sum+=5;
                    x=0;
                }
                sum+=1;
                i++;
                x++;
                
            }
            high=sum;
            break;
        }
        
        
        
    }
    cout<<low<<" "<<high;
    return 0;
}