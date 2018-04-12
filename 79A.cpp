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
    int x,y;
    cin>>x>>y;
    int p = 0;
    while(1)
    {
        if(x*100 + y*10 < 220)
        {
            string s = p==0?"Hanako":"Ciel";
            cout<<s;
            break;
        }
        if(p)
        {
            if(y>=22)
            {
                y-=22;
            }
            else if(y>=12 && x>=1)
            {
                y-=12;
                x-=1;
            }
            else if(y>=2 && x>=2)
            {
                y-=2;
                x-=2;
            }
            else
            {
                cout<<"Ciel"<<endl;
                break;
            }
        }
        else
        {
            if(x>=2 && y>=2)
            {
                x-=2;
                y-=2;
            }
            else if(x>=1 && y>=12)
            {
                x-=1;
                y-=12;
            }
            else if(y>=22)
            {
                y-=22;
            }
            else
            {
                cout<<"Hanako"<<endl;
                break;
            }
        }
        p = p==0?1:0;
    }
    return 0;
}