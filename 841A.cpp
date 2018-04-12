#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    string a;
    cin>>a;
    int freq[26] = {0};
    for(int i=0;i<a.length();i++)
        freq[a[i]-'a']++;
    int flag=1;
    for(int i=0;i<26;i++)
    {
        if(freq[i]>k)
            flag=0;
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
}