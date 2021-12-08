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

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,c1,c2,h;
      cin>>n>>c1>>c2>>h;
      string s;
      cin>>s;
      ll zero=0,one=0;
      for(int i=0;i<n;i++)
      {
        if(s[i]=='0')
        zero++;
        else if(s[i]=='1')
        one++;
      }
      if(zero==0)
      {
        if((one*c2)<=(one*c1)+(one*h))
        cout<<one*c2<<endl;
        else
        cout<<(one*c1)+(h*one)<<endl;
        continue;
      }
      if(one==0)
      {
        if((zero*c1)<=(zero*c2)+(zero*h))
        cout<<zero*c1<<endl;
        else
        cout<<(zero*c2)+(h*zero)<<endl;
        continue;
      }
      if(c1<c2)
      {
        ll coin_zero=zero*c1;
        ll coin_one=one*c2;
        if(coin_one<((one*c1)+(h*one)))
        coin_zero+=coin_one;
        else
        coin_zero+=(one*c1)+(one*h);
        cout<<coin_zero<<endl;
      }
      else
      {
        ll coin_zero=zero*c1;
        ll coin_one=one*c2;
        if(coin_zero<(zero*c2)+(zero*h))
        coin_one+=coin_zero;
        else
        coin_one+=(zero*c2)+(zero*h);
        cout<<coin_one<<endl;
      }
    }
    return 0;
  }
