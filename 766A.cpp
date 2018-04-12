#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    if(b==a)
     cout<<"-1";
     else
     cout<<max(a.length(),b.length());
    
}