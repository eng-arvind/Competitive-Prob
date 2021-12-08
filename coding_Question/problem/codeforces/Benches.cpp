#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool find_xor(int l,int r)
{
  int odd_number = (l-r)/2;
  if(l%2==1||r%2==1)
  {
    odd_number++;
  }
  if(odd_number%2==0)
  return true;
  else
  return false;
}
int main()
{
  // int n;
  // cin>>n;
  // int m;
  // cin>>m;
  // int a[n];
  // for(int i=0;i<n;i++)
  // cin>>a[i];
  // int mx = *max_element(a,a+n);
  // for(int i = 0; i<m; i++)
  // {
  //   int pos = -1;
  //   for (int j = 0; j < n; j++)
  //   {
  //       if (pos == -1 || a[j] < a[pos])
  //           pos = j;
  //   }
  //   if(pos != -1)
  //       a[pos]++;
  //   }
  //   int mn = *max_element(a,a+n);
  //   cout<<mn<<" "<<mx+m<<endl;
  int t;
  cin>>t;
  vector<string> v;
  while(t--)
  {
    string st;
    cin>>st;
    v.push_back(st);
  }
  sort(v.begin(),v.end());
  cout<<"output:"<<endl;
  for(int i=0;i<v.size();i++)
  cout<<v[i]<<endl;
  return 0;
}
