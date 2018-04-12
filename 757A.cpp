#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	string a;
	cin>>a;
	int ans[9]={0};
	for(int i=0;i<a.length();i++)
	{
	    switch(a[i])
	    {
	        case 'B':ans[0]++;break;//Bulbasaur
	        case 'u':ans[1]++;break;
	        case 'l':ans[2]++;break;
	        case 'b':ans[3]++;break;
	        case 'a':ans[4]++;break;
	        case 's':ans[5]++;break;
	        case 'r':ans[6]++;break;
	    }
	}
	int fin=1e6;
	for(int i=0;i<7;i++)
	{
	    switch(i)
	    {
	        case 0:fin=min(fin,ans[i]);break;
	        case 1:fin=min(fin,ans[i]/2);break;
	        case 2:fin=min(fin,ans[i]);break;
	        case 3:fin=min(fin,ans[i]);break;
	        case 4:fin=min(fin,ans[i]/2);break;
	        case 5:fin=min(fin,ans[i]);break;
	        case 6:fin=min(fin,ans[i]);break;
	    }
	}
	cout<<fin;
	return 0;
}