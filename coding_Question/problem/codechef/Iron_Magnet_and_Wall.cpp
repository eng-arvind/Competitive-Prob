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
ll solve(string s,ll k,queue<ll> M,queue<ll> I)
{
  int count=0;
  while(!M.empty() && !I.empty())
  {
    int m=M.front();
    int i=I.front();
    int sheet=0;
    int start=min(m,i);
    int dest=max(m,i);
    for(int j=start;j<=dest;j++)
    {
      if(s[j]==':')
      sheet++;
    }
    if((k+1-abs(m-i)-sheet)>0)
    {
      count++;
      M.pop();
      I.pop();
    }
  }
  return count;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      ll cnt=0;
      queue<ll> M;
      queue<ll> I;
      for(ll i=0;i<n;i++)
      {
        if(s[i]=='X')
        {
          cnt+=solve(s,k,M,I);
          while(!M.empty())
          M.pop();
          while(!I.empty())
          I.pop();
        }
        else if(s[i]=='I')
        {
          I.push(i);
        }
        else if(s[i]=='M')
        M.push(i);
      }
    cnt+=solve(s,k,M,I);
      cout<<cnt<<endl;
    }
    return 0;
  }
