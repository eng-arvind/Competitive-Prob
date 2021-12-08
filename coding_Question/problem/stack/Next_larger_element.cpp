#include<bits/stdc++.h>
#include<stack>
#include<unordered_map>
#define ll long long int
using namespace std;
void solve(ll a[],ll n)
{
  stack<ll> st;
  unordered_map<ll,ll> mp;
  st.push(a[0]);
  for(ll i=1;i<n;i++)
  {
    if(st.empty())
    {
      st.push(a[i]);
      continue;
    }
    while(st.empty()==false && st.top()<a[i])
    {
      mp[st.top()]=a[i];
      st.pop();
    }
    st.push(a[i]);
  }
  while(st.empty()==false)
  {
    mp[st.top()]=-1;
    st.pop();
  }
  for(ll i=0;i!=n;i++)
  {
    cout<<mp[a[i]]<<" ";
  }
}
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    solve(a,n);
    cout<<endl;
  }
  return 0;
}
