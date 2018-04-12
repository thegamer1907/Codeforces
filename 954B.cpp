#include <bits/stdc++.h>
using namespace std;

bool chk(string s)
{
    //cout<<s<<endl;
    if(((int)s.length())%2 == 1)
        return false;
    for(int i=0,j=s.length()/2;j<s.length();j++,i++)
    {
        if(s[i] != s[j])
            return false;
    }
    return true;
}


int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
    int ans = 0;
    for(int j=1;j<s.length();j++)
    {
        string t = s.substr(0,j+1);
        if(chk(t))
        {
            ans = max(ans,(int)t.length());
        }
    }
    //cout<<ans<<endl;
    if(ans == 0)
        cout<<s.length();
    else
        cout<<(ans/2) + 1 + s.length()-ans;
	return 0;
}