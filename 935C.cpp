#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

double dist(ll x1,ll y1,ll x2,ll y2)
{
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

ll dist2(ll x1,ll y1,ll x2,ll y2)
{
    return ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

double dist3(double x1,double y1,double x2,double y2)
{
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    ll r,x1,y1,x2,y2;
    cin>>r>>x1>>y1>>x2>>y2;
    if((r*r) <= dist2(x1,y1,x2,y2))
    {
        printf("%.10lf %.10lf %.10lf",(double)x1,(double)y1,(double)r);
        return 0;
    }
    double dia = r + dist(x1,y1,x2,y2);
    dia/=2;
    double px1,py1,px2,py2;
    if(x2 == x1)
    {
        px1 = x1;
        py1 = y2 + dia;
        px2 = x1;
        py2 = y2 - dia;
    }
    else
    {
    double m = (y2 - y1)/(double)(x2-x1);

    px1 = x2 + dia*sqrt(1/(1 + (m*m)));
    py1 = y2 + m*dia*sqrt(1/(1 + (m*m)));
    px2 = x2 - dia*sqrt(1/(1 + (m*m)));
    py2 = y2 - m*dia*sqrt(1/(1 + (m*m)));
    }
    double dis1 = dist3(x1,y1,px1,py1);
    double dis2 = dist3(x1,y1,px2,py2);
    if(dis1 < dis2)
    {
        printf("%.15lf %.15lf %.15lf",px1,py1,dia);
    }
    else
        printf("%.15lf %.15lf %.15lf",px2,py2,dia);
    return 0;
}