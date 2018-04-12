#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
        int n;
        string f,s;
        cin>>f;
        cin>>s;
        cin>>n;
	    string a[n][2];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i][0];
	        cin>>a[i][1];
	    }
	    cout<<f<<" "<<s<<endl;
	    string v;
	    for(int i=0;i<n;i++)
	    {
	        v=(a[i][0]==f)?s:f;
	        cout<<v<<" "<<a[i][1]<<endl;
	        f=v;
	        s=a[i][1];
	    }
	return 0;
}