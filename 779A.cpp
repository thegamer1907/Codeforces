#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>
//#include <bits/
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> b(n);
	vector<int> ca(6,0);
	vector<int> cb(6,0);
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    switch(a[i])
	    {
	        case 1:ca[1]++;break;
	        case 2:ca[2]++;break;
	        case 3:ca[3]++;break;
	        case 4:ca[4]++;break;
	        case 5:ca[5]++;break;
	    }
	}
	for(int i=0;i<n;i++)
	{
	    cin>>b[i];
	    switch(b[i])
	    {
	        case 1:cb[1]++;break;
	        case 2:cb[2]++;break;
	        case 3:cb[3]++;break;
	        case 4:cb[4]++;break;
	        case 5:cb[5]++;break;
	    }
	}
	int sum=0;
	for(int i=1;i<=5;i++)
	{
	    if((ca[i]+cb[i])%2!=0)
	     {
	         cout<<"-1";
	         return 0;
	     }
	     sum+= abs(ca[i]-cb[i]);
	}
	cout<<sum/4;
	
	
	return 0;
}