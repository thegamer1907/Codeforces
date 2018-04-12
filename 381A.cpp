#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    list<int> a;
    int te;
    for(int i=0;i<n;i++)
    {
        cin>>te;
        a.push_back(te);
    }
    int s=0,d=0;
    int i=0,t;
    while(!a.empty())
    {
        if(a.front()>a.back())
        {
            t = a.front();
            a.pop_front();
        }
        else
        {
            t = a.back();
            a.pop_back();
        }
        if(i%2==0)
         s+=t;
        else
         d+=t;
        i++;
    }
    cout<<s<<" "<<d;
}