#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    long long int n,k,c=0;
    vector<long long int> f;
    cin>>n>>k;
    for(long long int i=1;i*i<n;i++)
    {
        if(n%i==0 &&n/i!=i)
        {
            f.push_back(n/i);
            f.push_back(i);
            c+=2;
        }
        else if(n%i==0)
        {
            f.push_back(i);
            c++;
        }

    }
    if((long long int)sqrt(n)*(long long int)sqrt(n)==n)
    {
        f.push_back(sqrt(n));
        c++;
    }
    if(k<=c)
    {
        sort(f.begin(),f.end());
        cout<<f[k-1]<<endl;
    }
    else
        cout<<-1<<endl;
    return 0;
}