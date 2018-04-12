#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,j;
    cin>>n;
	vector <pair<int,int> > a(n);
	for(int i=0;i<n;i++)
	{
	    cin>>a[i].first;
	    a[i].second=i;
	}
	sort(a.begin(),a.end());
	//for(int i=0;i<n;i++)
	//cout<<a[i].first<<" "<<a[i].second;
	for(int j=0;j<a[n-1].second;j++)
	     cout<<"\n";
	     cout<<a[n-1].first<<" ";
	j=n-2;
	int line =a[n-1].second;
	while(j>=0)
	{
	    if(a[j].second<line)
	    {
	        cout<<a[j].first<<" ";
	    }
	    else
	    {
	        for(int k=line;k<a[j].second;k++)
	         cout<<"\n";
	      cout<<a[j].first<<" ";
	      line = a[j].second;
	    }
	    j--;
	}
	
	return 0;
}