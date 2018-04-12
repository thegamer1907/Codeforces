#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	if(n==1)
	 {cout<<a[0];return 0;}
	sort(a.begin(),a.end());
	if(n==3)
	 cout<<a[1];
	 else
	 cout<<a[2];
	 
	return 0;
}