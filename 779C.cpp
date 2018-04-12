#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
//#include <bits/
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n+1);
    vector<int> b(n+1);
    vector<pair<int,int> >diff;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    int co=0;
    //cout<<a[n]<<b[n];
    for(int i=1;i<=n;i++)
    {
        //if(i==n)
        //cout<<a[i]<<b[i];
        //if(a[i]-b[i]<0)
        // co++;
        diff.push_back(make_pair(a[i]-b[i],i));
    }
      /*for(int i=0;i<n;i++)
    {
        cout<<diff[i].first;
        cout<<diff[i].second<<endl;
    }*/
    sort(diff.begin(),diff.end());
    int nega=n+1;
    for(int i=0;i<n;i++)
    {
        if(diff[i].first<0)
        {
            co++;
        }
        else
        {
            nega=i;break;}
    }
    if(co>=k)
    {
        int sum=0;
        for(int i=0;i<nega;i++)
        {
            sum+= a[diff[i].second];
        }
        for(int i=nega;i<n;i++)
        {
            sum+=b[diff[i].second];
        }
        cout<<sum;
        return 0;
    }
    else
    {
         int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+= a[diff[i].second];
        }
        for(int i=k;i<n;i++)
        {
            sum+= b[diff[i].second];
        }
        cout<<sum;
        return 0;
    }
	return 0;
}