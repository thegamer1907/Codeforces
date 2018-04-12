#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define MOD 1000000007
#define endl '\n'
using namespace std;

bool check(string a,string b)
{
	string s=a;
    int flag=1;
    string hack = b;
    int j=0;
    for(int i=0;i<hack.length();i++)
    {
        while(1)
        {
            if(j==s.length())
            {
                flag=0;
                break;
            }
            if(s[j]==hack[i])
            {j++;break;}
            j++;
        }
    }
    if(flag)
        return true;
    else
        return false;
	
}



int main()
{
	string s,t;
	cin>>s>>t;
	int fs[26] = {0};
	int ft[26] = {0};
	//cout<<s.find(t)<<endl;
	if(s.find(t)>=0 && s.find(t)<s.length())
	{
		cout<<"automaton";
		return 0;
	}
	if(check(s,t))
	{
		cout<<"automaton";
		return 0;
	}
	for(int i=0;i<s.length();i++)
		fs[s[i]-'a']++;
	for(int i=0;i<t.length();i++)
		ft[t[i]-'a']++;
	int flag=1;
	for(int i=0;i<26;i++)
	{
		if(ft[i]!=fs[i])
		{
			flag=0;
			break;
		}
	}
	if(flag)
	{
		cout<<"array";
		return 0;
	}
	flag=1;
	for(int i=0;i<26;i++)
	{
		if(ft[i]>fs[i])
		{
			flag=0;
			break;
		}
	}
	if(flag)
		cout<<"both";
	else
		cout<<"need tree";
	return 0;
}