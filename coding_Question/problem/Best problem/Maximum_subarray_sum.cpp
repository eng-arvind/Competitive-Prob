#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve()
{
  cout<<"Enter size of array"<<endl;
  int n;
  cin>>n;
  cout<<"Enter element of array"<<endl;
  int a[n];
  for(int i=0;i<n;++i) cin>>a[i];
  int sum=0,best=0;
  for(int i=0;i<n;++i)
  {
    sum=max(a[i],sum+a[i]);
    best=max(sum,best);
  }
  cout<<"Maximum subarray sum is:"<<best<<endl;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
