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
    int n,m;
    cin>>n>>m;
    char a[n][m];
    pair<int,int> st,en;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='S')
            {
                st = mp(i,j);
            }
            if(a[i][j] == 'E')
            {
                en = mp(i,j);
            }
        }
    }
    string in;
    cin>>in;
    vector<char> dir;
    dir.pb('U');
    dir.pb('L');
    dir.pb('R');
    dir.pb('D');
    sort(all(dir));
    int ans = 0;
    do
    {
        pair<int,int> pos;
        pos = st;
        int flag=0;
        for(int i=0;i<in.length();i++)
        {
            char no = dir[in[i]-'0'];
            switch(no)
            {
                case 'U':pos.ff--;break;
                case 'L':pos.ss--;break;
                case 'R':pos.ss++;break;
                case 'D':pos.ff++;break;
            }
            if(pos.ff==en.ff && pos.ss==en.ss)
            {
                flag=1;
                ans++;
                break;
            }
            if(pos.ff < 0 || pos.ff >=n || pos.ss < 0 || pos.ss >=m || a[pos.ff][pos.ss]=='#')
                break;
        }
        if(pos.ff==en.ff && pos.ss==en.ss && flag==0)
        {
                ans++;
        }
    }while(next_permutation(all(dir)));
    cout<<ans;
    return 0;
}