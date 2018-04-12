#include <iostream>
#include<vector>
#include <math.h>

using namespace std;

int main() {
	int n,temp,c=0;
	cin>>n;
	int max1=0;
	vector<int> a(n+1,0);
	for(int i=1;i<=2*n;i++)
	{
	    cin>>temp;
	    a[temp]++;
	    c++;
	    if(a[temp]==2)
	     c-=2;
	    if(c>max1)
	     max1=c;
	}
	cout<<max1;
	return 0;
}