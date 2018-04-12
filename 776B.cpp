#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define endl "\n"

using namespace std;

bool prime(int x)
{
if (x < 2) return false;
for(int i=2; i<= sqrt(x); i++) {
if ((x%i) == 0) return false;
}
return true;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        cout<<1<<endl;
        return 0;
    }
    else if(n==2)
    {
        cout<<1<<endl;
        cout<<"1 1"<<endl;
        return 0;
    }
    cout<<2<<endl;
    for(int i=2;i<=n+1;i++)
    {
        if(prime(i))
        {
            cout<<2<<" ";
        }
        else
        {
            cout<<1<<" ";
        }
    }
    return 0;
}