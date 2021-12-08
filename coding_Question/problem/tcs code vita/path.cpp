#include <bits/stdc++.h>
#include <vector>
#include<bitset>
#include<string>
#include<sstream>
#include <algorithm>
#define pb push_back
#define s second
#define f first
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define setbits(x) __builtin_popcountll(x)
#define mod 1000000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define ll long long int
using namespace std;
ll ans(ll a)
{
  for(ll i=2;i*i<=a;i++)
  {
  if(a%i==0)
  return a/i;
    }
    return 1;
}
int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      ll a,b;
      cin>>a>>b;
      if(a<b)
      swap(a,b);
      if(a==b)
      {
      cout<<"0";
      return 0;
      }
      map<ll,ll> mp;
      ll cnt=0;
      while(a!=1)
      {
        cnt++;
        a=ans(a);
        mp[a]=cnt;
      }
      cnt=0;
      while(!mp.count(b))
      {
        cnt++;
        b=ans(b);
      }
      cout<<cnt+mp[b]<<endl;

    return 0;
  }
