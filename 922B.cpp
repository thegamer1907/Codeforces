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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    map<pair<int,pair<int,int> >,int > m;
    int ans = 0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i^j)==0 || (i^j) > n)
                continue;
            int a[] = {i,j,i^j};
            sort(a,a+3);
            if(a[0] + a[1] <= a[2])
                continue;
            if(m[mp(a[0],mp(a[1],a[2]))] == 0)
            {
                ans++;
                //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
                m[mp(a[0],mp(a[1],a[2]))] = 1;
            }
        }
    }
    cout<<ans;
    return 0;
}