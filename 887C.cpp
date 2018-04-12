#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

int a[25];
bool chk(int b[6][4])
{
    for(int i=0;i<6;i++)
    {
        int x = a[b[i][0]];
        for(int j=0;j<4;j++)
        {
            if(x!=a[b[i][j]])
            {
                return false;
            }
        }
    }
    if(a[b[0][0]]!=a[b[1][0]])
    {
        if(a[b[1][0]]!=a[b[2][0]])
        {
            if(a[b[2][0]]!=a[b[3][0]])
            {
                if(a[b[3][0]]!=a[b[4][0]])
                {
                    if(a[b[4][0]]!=a[b[5][0]])
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i=1;i<=24;i++)
        cin>>a[i];
    int ch1[6][4] = {2,4,22,24,5,7,10,12,1,3,6,8,9,11,21,23,13,14,15,16,17,18,19,20};
    int ch2[6][4] = {2,4,5,7,6,8,9,11,1,3,21,23,10,12,22,24,13,14,15,16,17,18,19,20};
    int ch3[6][4] = {17,18,23,24,5,6,19,20,7,8,13,14,21,22,15,16,1,2,3,4,9,10,11,12};
    int ch4[6][4] = {5,6,15,16,7,8,17,18,19,20,21,22,13,14,23,24,1,2,3,4,9,10,11,12};
    int ch5[6][4] = {13,15,3,4,14,16,11,12,9,10,18,20,1,2,17,19,5,6,7,8,21,22,23,24};
    int ch6[6][4] = {1,2,14,16,3,4,18,20,11,12,17,19,9,10,13,15,5,6,7,8,21,22,23,24};

    int cnt=0;
    cnt+=chk(ch1);
    cnt+=chk(ch2);
    cnt+=chk(ch3);
    cnt+=chk(ch4);
    cnt+=chk(ch5);
    cnt+=chk(ch6);
    if(cnt==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}