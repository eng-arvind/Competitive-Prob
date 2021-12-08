#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  ll a[4];
  for(int i=0;i<4;i++)
  cin>>a[i];
  sort(a,a+4);
  for(int i=0;i<3;i++)
  a[i]=a[3]-a[i];
  for(int i=0;i<3;i++)
  cout<<a[i]<<" ";
  return 0;
}
