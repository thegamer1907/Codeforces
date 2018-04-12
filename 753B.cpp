#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    string s = "0000";
    vector<int> a;
    int b,c;
    for(int i=0;i<10;i++)
    {
        cout<<s<<endl;
        //cout<<"1230"<<endl;
        fflush(stdout);
        cin>>b>>c;
        if(c>=1 || b>=1)
            a.push_back(i);
        for(int j=0;j<4;j++)
            s[j]++;
    }
    sort(a.begin(),a.end());
    do
    {
        cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
        fflush(stdout);
        cin>>b>>c;
        if(b==4 && c==0)
            break;
        fflush(stdout);
    }while(next_permutation(a.begin(),a.end()));
    fflush(stdout);
    return 0;
}