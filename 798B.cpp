#include <bits/stdc++.h>
using namespace std;

int main() {
	string s[60];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	 cin>>s[i];
	int final = INT_MAX;
	int oflag;
	for(int i=0;i<n;i++)
	{
	    int pre=0;
	    oflag=0;
	    for(int j=0;j<n;j++)
	    {
	        if(j==i)
	         continue;
	        string temp=s[j];
	        int tc=0;char tchar;
	        while(temp!=s[i])
	        {
	            tchar=temp[0];
	            temp.erase(0,1);
	            temp+=tchar;
	            tc++;
	            if(tc==temp.length())
	             break;
	        }
	        if(tc==temp.length())
	        {
	            oflag=1;
	            break;
	        }
	        pre+=tc;
	    }
	    if(oflag==0)
	    {
	        final=min(final,pre);
	    }
	}
	if(final==INT_MAX)
	 cout<<"-1";
	else
	 cout<<final;
	return 0;
}