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
ll solve()
{
  ll n;
  cin>>n;
  ll a[n];
  for(ll i=0;i<n;i++) cin>>a[i];
     int cnt=1;
     if(n==1)
     return cnt;
     else if(n==2)
     return cnt+1;
     int v=2;
     cnt++;
    for(ll i=2;i<n;i++)
    {
      if(a[i]-a[i-1]==a[i-1]-a[i-2])
      v++;
      else
      v=2;
      cnt=max(cnt,v);
    }
    return cnt;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      ll t;
      cin>>t;
      for(ll i=1;i<=t;i++)
      {
        cout<<"Case #"<<i<<": "<<solve()<<endl;
      }
    return 0;
  }
