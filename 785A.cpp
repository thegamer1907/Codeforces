#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int n,final=0;
	char a[100];
	cin>>n;
	while(n--)
	{
	    cin>>a;
	    if(!strcmp(a,"Tetrahedron"))
	     final+=4;
	  if(!strcmp(a,"Cube"))
	     final+=6;
	  if(!strcmp(a,"Octahedron"))
	     final+=8;
	  if(!strcmp(a,"Dodecahedron"))
	     final+=12;
	  if(!strcmp(a,"Icosahedron"))
	     final+=20;
	  
	}
	cout<<final;
	return 0;
}