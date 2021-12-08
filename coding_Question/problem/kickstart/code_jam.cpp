#include <iostream>
#include<bits/stdc++.h>
#include<map>
#define ll  int
#define pb push_back
#define mk make_pair
using namespace std;
int fn(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a-b);
}
void solve()
{
	ll n;
	cin>>n;
	vector<pair<ll,ll> >mt(n);
	vector<pair<ll,ll> >mst(n);
  char person='J';
  char chars[n];
  stack<ll> jst;
  stack<ll> cst;
  bool imp=false;
  map<ll,ll> mp;
  for(ll i=0;i<n;i++)
  {
      ll a,b;
      cin>>a>>b;
      mt.pb(mk(a,b));
    mp.insert(pair<int,int>(a,i));
  }
mst.swap(mt);
sort(mst.begin(),mst.end(),fn);
for(ll i=0;i<mst.size();i++)
{
  chars[mst[i]]=person;
  
}
}

int main()
{
   ll t;
   cin>>t;
  while(t--)
  {
  	solve();
  }
}
