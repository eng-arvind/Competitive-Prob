#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll t;
  cin>>t;
  while(t--)
  {
    ll x,y,n;
    bool f=true;
    cin>>x>>y>>n;//5 0 4
    ll md=n%x;
    md=y-md;
    ll m=x-md;
    cout<<n-m<<endl;
  }
  return 0;
}
