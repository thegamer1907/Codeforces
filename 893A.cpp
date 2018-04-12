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
    int n,x;
    cin>>n;
    int nt = 3;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==nt)
        {
            cout<<"NO";
            return 0;
        }
        else{
            if(nt==3 && x==1)
                nt=2;
            else if(nt==3 && x==2)
                nt = 1;
            else if(nt==2 && x==1)
                nt = 3;
            else if(nt==2 && x==3)
                nt = 1;
            else if(nt==1 && x==2)
                nt = 3;
            else if(nt==1 && x==3)
                nt = 2;
        }
    }
    cout<<"YES"<<endl;
}