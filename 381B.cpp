#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    vector<int> fin;
    int i,j,count1;
    vector<int> te;
    for(i=0;i<n;i=j)
      {
          count1=0;
          for(j=i;j<n;j++)
          {
              if(a[i]==a[j])
                count1++;
              else
                break;
          }
          if(count1>1)
          {
              te.push_back(a[i]);
              fin.push_back(a[i]);
          }
          else
          {
              fin.push_back(a[i]);
          }
      }
      if(count1>1)
      {
          for(int i=te.size()-2;i>=0;i--)
            fin.push_back(te[i]);
      }
      else
      {
          for(int i=te.size()-1;i>=0;i--)
            fin.push_back(te[i]);
      }
      cout<<fin.size()<<endl;
      for(int i=0;i<fin.size();i++)
        cout<<fin[i]<<" ";

}