#include<iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int a[n];
    int max1=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max1)
            max1=a[i];
    }
    int count1=0;
    for(int i=0;i<n;i++)
    {
        count1 = count1 + (max1-a[i]);
    }
    cout<<count1;
}