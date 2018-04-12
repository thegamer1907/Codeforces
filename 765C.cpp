#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    long long int k,a,b;
    cin>>k>>a>>b;
    if(a<k && b<k)
     cout<<"-1";
     else
     {
         if(a<k && b%k==0)
         {
             cout<<b/k;
         }
         else if(b<k && a%k==0)
         {
             cout<<a/k;
         }
         else if(a<k || b<k)
         {
             cout<<"-1";
         }
         else
         {
             cout<<((a+b)-((a%k)+(b%k)))/k;
         }
     }
	return 0;
}