#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mod %1000000007
using namespace std;


vector<int> tp(25);

void construct1(int st,int en,int pos,vector<int>&seg,vector<int>&a)
{
    if(st==en)
    {
        seg[pos] = a[st];
        return;
    }
    int mid = (st+en)/2;
    construct1(st,mid,2*pos+1,seg,a);
    construct1(mid+1,en,2*pos+2,seg,a);
    seg[pos] = ((seg[2*pos+1]mod)+(seg[2*pos+2]mod))mod;
}

void construct(int st,int en,int pos,vector<int>&seg)
{
    if(st==en)
    {
        seg[pos] = 0;
        return;
    }
    int mid = (st+en)/2;
    construct(st,mid,2*pos+1,seg);
    construct(mid+1,en,2*pos+2,seg);
    seg[pos] = ((seg[2*pos+1]mod)+(seg[2*pos+2]mod))mod;
}
int n1;
int query(int qlow,int qhigh,int st,int en,int pos,vector<int>&seg,vector<int>&lazy)
{
    if (lazy[pos] != 0)
    {
        seg[pos] =  ((seg[pos])mod + ((en-st+1)mod*(lazy[pos])mod)mod)mod;
        if (st!=en)
        {
            lazy[pos*2 + 1]  = ((lazy[pos*2 + 1])mod + (lazy[pos])mod)mod;
            lazy[pos*2 + 2]  = ((lazy[pos*2 + 2])mod + (lazy[pos])mod)mod;
        }
        lazy[pos]=0;
    }
    if(qlow<=st && qhigh>=en)
        return seg[pos];
    else if(qhigh<st || qlow>en)
        return 0;
    else
    {
        int mid = (st+en)/2;
        return ((query(qlow,qhigh,st,mid,2*pos+1,seg,lazy))mod+(query(qlow,qhigh,mid+1,en,2*pos+2,seg,lazy))mod)mod;
    }
}

/*
5
1 2 3 4 5
10
2 0 4 1
*/

void update(int node,int st,int en,int l,int r,int val,vector<int>&seg,vector<int>&lazy)
{

    if (lazy[node] != 0)
    {
        seg[node] =  ((seg[node])mod + ((en-st+1)mod*(lazy[node])mod)mod)mod;
        if (st!=en)
        {
            lazy[node*2 + 1]  = ((lazy[node*2 + 1])mod + (lazy[node])mod)mod;
            lazy[node*2 + 2]  = ((lazy[node*2 + 2])mod + (lazy[node])mod)mod;
        }
        lazy[node]=0;
    }
    if(l>en || r<st || st>en)
        return;
    if(st>=l && en<=r)
    {
         seg[node] =  ((seg[node])mod + ((en-st+1)mod*(val)mod)mod)mod;
        if (st!=en)
        {
            lazy[node*2 + 1]  = ((lazy[node*2 + 1])mod + (val)mod)mod;
            lazy[node*2 + 2]  = ((lazy[node*2 + 2])mod + (val)mod)mod;
        }
        return;
    }
    int mid = (st+en)/2;
    update(2*node+1,st,mid,l,r,val,seg,lazy);
    update(2*node+2,mid+1,en,l,r,val,seg,lazy);
    seg[node]= ((seg[2*node+1])mod+(seg[2*node+2])mod)mod;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> ctree(2000000,0);
    vector<int> atree(2000000,0);
    vector<int> clazy(2000000,0);
    vector<int> alazy(2000000,0);
    int n,k,q;
    cin>>n>>k>>q;
    construct(0,200002,0,ctree);
    int l,r;
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
        update(0,0,200002,l,r,1,ctree,clazy);
    }
    vector<int> a(200001,0);
    for(int i=1;i<=200000;i++)
    {
        if(query(i,i,0,200002,0,ctree,clazy)>=k)
            a[i]=1;
    }
    construct1(0,200002,0,atree,a);
    while(q--)
    {
        cin>>l>>r;
        cout<<query(l,r,0,200002,0,atree,alazy)<<endl;
    }

}