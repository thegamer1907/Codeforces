#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <long long int> a(n);
    for(int i=0;i<n;i++)
     cin>>a[i];
    sort(a.begin(),a.end());
    int flag=0;
    for(int i=0;i<n-2;i++)
    {
        if((a[i]+a[i+1]>a[i+2]) && (a[i]+a[i+2]>a[i+1]) && (a[i+1]+a[i+2]>a[i]))
         {flag=1;break;}
    }
    if(flag==0)
     cout<<"NO";
     else
     cout<<"YES";
}