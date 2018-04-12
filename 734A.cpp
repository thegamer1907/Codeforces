#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,a=0,d=0;
	string st;
	cin>>n;
	cin>>st;
	for(int i=0;i<st.length();i++)
	{
	    if(st[i]=='A')
	     a++;
	     else
	     d++;
	}
	if(a>d)
	 cout<<"Anton";
	 else if(d>a)
	  cout<<"Danik";
	  else
	  cout<<"Friendship";

	return 0;
}