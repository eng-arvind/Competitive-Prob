#include <iostream>
#include <bits/stdc++.h>
#define w(t) int t; cin>>t; while(t--)
#define ll long long int
using namespace std;
ll solve(ll ar[],ll n)
{
  ll bs=0,mx=1,cnt=0;
  ll tp1,tp2;
    while(bs<=n-1){
      tp2=bs;
      cnt=0;
      while(ar[bs]!=0)
      {
        tp1=bs;
        bs=ar[bs]-1;
        ar[tp1]=0;
        cnt+=1;
      }
      bs=tp2+1;
      if(cnt!=0)
      mx=mx*cnt/__gcd(mx,cnt);
    }
    return mx;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      w(t)
      {
        ll n;
        cin>>n;
        ll ar[n];
        for(ll i=0;i<n;i++)cin>>ar[i];
        cout<<solve(ar,n);
      }
    return 0;
  }
