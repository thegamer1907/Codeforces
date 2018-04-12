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
vector<char> an;
int vis[26];
int rec[26];
int e;
vector<int> a[26];
bool cycle(int s)
{
    if(!vis[s])
    {
        vis[s] = 1;
        rec[s] = 1;
        for(int i =0;i<a[s].size();i++)
        {
            if (!vis[a[s][i]] && cycle(a[s][i]))
                return true;
            else if (rec[a[s][i]])
                return true;
        }
    }
    rec[s] = 0;
    return false;
}

void topo(int s)
{
	vis[s]=1;
	for(int i=0;i<a[s].size();i++)
	{
		if(!vis[a[s][i]])
		{
			topo(a[s][i]);
		}
	}
	an.pb((char)(s+'a'));
}

void dfs(int u)
{
    cout<<(char)(u+'a');
    vis[u]=1;
    for(int i=0;i<a[u].size();i++)
    {
        if(!vis[a[u][i]])
            dfs(a[u][i]);
    }
}


int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int parent[26];
    for(int i=0;i<26;i++)
        parent[i]=i;
    int n;
    cin>>n;
    //cout<<1;
    vector<string> w;
    string ss;
    for(int i=0;i<n;i++)
    {
        cin>>ss;
        //cout<<ss<<endl;
        w.pb(ss);
    }
    //cout<<1;
    int vis2[26] = {0};
    //cout<<1;
    for(int i=0;i<n-1;i++)
    {
        //cout<<1;
        int l1 = w[i].length(),j;
        int l2 = w[i+1].length();
        for(j=0;j<min(l1,l2);j++)
        {
            if(w[i][j]!=w[i+1][j])
                break;
        }
        if(j==l1)
            continue;
        if(j==l2 && l2<l1)
        {
            cout<<"Impossible";
            return 0;
        }
        //cout<<j<<endl;
        a[w[i][j]-'a'].pb(w[i+1][j]-'a');
        vis2[w[i][j]-'a']=1;
        vis2[w[i+1][j]-'a']=1;
        parent[w[i+1][j]-'a'] = parent[w[i][j]-'a'];
    }
    for(int i=0;i<26;i++)
    {
        if(cycle(i))
        {
            cout<<"Impossible";
            return 0;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(!vis2[i])
        {
            char c = (i+'a');
            cout<<c;
        }
    }
    //cout<<endl;
    memset(vis,0,sizeof(vis));
    for(int i=0;i<26;i++)
    {
		if(vis2[i]==0)
			continue;
		if(!vis[i] && parent[i]==i)
		{
			topo(i);
		}
	}
	reverse(all(an));
	for(int i=0;i<an.size();i++)
	 cout<<an[i];
    return 0;
}