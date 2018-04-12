#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main()
{
    string b;int n,j;
    cin>>b;
    char a[30][4];
    if(b.length()%4==0)
        n=b.length()/4;
    else
        n=(b.length()/4)+1;
    int c=-1;
    for(int i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j]=b[++c];
        }

    }
    int ans[4];
    int count1=0;
    char check;
    for(int i=0;i<4;i++)
    {
        count1=0;
        for(int j=0;j<n;j++)
        {
            if(a[j][i]=='!')
                count1++;
            else if(a[j][i]=='R'||a[j][i]=='B'||a[j][i]=='Y'||a[j][i]=='G')
                check=a[j][i];
        }
        if(check=='R')
           ans[0]=count1;
        else if(check=='B')
            ans[1]=count1;
        else if(check=='Y')
            ans[2]=count1;
        else
            ans[3]=count1;
    }
    for(int i=0;i<4;i++)
        cout<<ans[i]<<" ";


}