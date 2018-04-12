#include <iostream>
using namespace std;

 int gcd (int n1,int n2) {
    return (n2 == 0) ? n1 : gcd (n2, n1 % n2);
}
int main() {
  int a,b,c,temp;
  cin>>a>>b>>c;
  if(a>b)
  temp=gcd(a,b);
  else
  temp=gcd(b,a);
  temp = (a*b)/temp;
  cout<<c/temp;
	return 0;
}