#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==0&&b==0)
      cout<<"NO";
      else if(abs(a-b)==1||abs(a-b)==0)
      cout<<"YES";
      else
      cout<<"NO";
}