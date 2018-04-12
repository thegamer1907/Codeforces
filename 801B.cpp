#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.length();i++)
	{
	    if(b[i]>a[i])
	    {
	        cout<<"-1";
	        return 0;
	    }
	}
	cout<<b;
	return 0;
}