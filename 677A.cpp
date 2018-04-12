#include<iostream>

using namespace std;


int main()
{
    int n,h,sum,temp;
    cin>>n>>h;
    sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp<=h)
         sum++;
         else
         sum+=2;
    }
    cout<<sum;
}