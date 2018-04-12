#include <bits/stdc++.h>
using namespace std;

int main() {
	string a;
	cin>>a;
	int flag=0;
	if(a.length()==1 )
	 {
	     cout<<"YES";
	     return 0;
	 }
	for(int i=0,j=a.length()-1;i<a.length()/2;i++,j--)
	{
	    if(a[i]!=a[j])
	     {
	         flag++;
	     }
	}
	if(a.length()%2!=0 && flag==0)
	 {cout<<"YES";
	     return 0;
	 }
	if(flag==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}