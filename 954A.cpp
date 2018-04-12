#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	s+="$";
	string temp;
	int flag = 1;
	while(flag)
	{
	    flag = 0;
	    temp = "";
	    for(int i=0;i<s.length()-1;i++)
	    {
	        if((s[i] == 'R' && s[i+1] == 'U') || (s[i] == 'U' && s[i+1] == 'R'))
	        {
	            temp+='D';
	            i++;
	            flag = 1;
	        }
	        else
	        {
	            temp+=s[i];
	        }
	    }
	    //temp+=s[s.length()-1];
	    s = temp;
	    s+="$";
	}
	cout<<s.length()-1;
	return 0;
}