#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<vector<int> > v;
    for(int i=0;i<n;i++)
    {
      vector<int> tp;
      for(int j=0;j<n;j++)
      {
        int a;
        cin>>a;
        tp.push_back(a);
      }
      v.push_back(tp);
    }
    int cnt=0;
    for(int i=n-1;i>0;i--)
    {
      if(v[i][i]!=v[i][i-1]+1)
      {
        cnt++;
        for(int x=0;x<i+1;x++)
        {
          for(int y=x;y<i+1;y++)
          {
            swap(v[x][y],v[y][x]);
          }
        }
      }
      else
      continue;
    }
    cout<<cnt<<endl;
  }
}
