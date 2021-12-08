#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,m;
    cin>>n>>m;
    ll l,r,c,p,q,s;
    ll hs[n]={0};

    for(ll i=l;i<=r;i++)
    {
      L[i] = (L[i-1] * P + R[i-1]) % N + 1;
  R[i] = (R[i-1] * Q + L[i-1]) % N + 1;
  if(L[i] > R[i])
      swap(L[i] , R[i]);
  C[i] = (C[i-1] * S) % 1000000 + 1;
    }

  }

    return 0;
}
