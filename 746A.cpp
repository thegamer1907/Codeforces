#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int a1,b1,c1;
    a1 = a;
    b1 = b/2;
    c1 = c/4;
    int f = min(a1,min(b1,c1));
    cout<<(1*f)+(2*f)+(4*f);
    return 0;
}