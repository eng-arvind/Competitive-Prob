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
ll solve(ll n,ll a,ll b, ll c, ll arr[])
{
  if(c==1 && a>1 && b>1)
  return -1;
  if(a==n || b==n || c==n)
  return -1;
  if(a>1)
  swap(arr[0],arr[a-1]);
  else if(a==b)
  swap(arr[n-1],arr[n-b]);
  else if(b<n)
  swap(arr[n-1],arr[(n-b)+1]);
  // for(ll i=0;i<n;i++)
  // cout<<arr[i]<<" ";
  return 1;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      ll t;
      cin>>t;
      for(ll i=1;i<=t;i++)
      {
        ll n,a,b,c;
        cin>>n>>a>>b>>c;
        ll arr[n]={0};
        ll num=n;
        for(ll i=0;i<n;i++)
        arr[i]=num--;
        ll k=solve(n,a,b,c,arr);
        if(k==-1)
        cout<<"Case #"<<i<<": "<<"IMPOSSIBLE"<<endl;
        else
        {
          cout<<"Case #"<<i<<": ";
          for(ll i=0;i<n;i++)
          cout<<arr[i]<<" ";
        }
        cout<<endl;
      }
    return 0;
  }
