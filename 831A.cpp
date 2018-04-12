#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int flag;
    if(a[0]<a[1])
        flag=0;
    else if(a[0]==a[1])
        flag=1;
    else
        flag=2;
    for(int i=2;i<n;i++)
    {
        if(a[i-1]<a[i])
        {
            if(flag!=0)
            {
                cout<<"NO";
                return 0;
            }
        }
        else if(a[i-1]==a[i])
        {
            if(flag==1)continue;
            if(flag==0) flag=1;
            if(flag==2)
            {
                cout<<"No";
                return 0;
            }
        }
        else
        {
            if(flag==1 || flag==0)
                flag=2;
        }
    }
    cout<<"YES";
    return 0;
}