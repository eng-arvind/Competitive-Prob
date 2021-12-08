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
void rotate(ll m[r][c],ll r,ll c, ll rr,ll wt)
{
  if(wt%2!=0)
  {
    for(ll i=)
  }

}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
        ll r,c;
        cin>>r>>c;
        ll m[r][c];
        for(ll i=0;i<r;i++)
        {
          for(ll j=0;j<c;j++)
          cin>>m[i][j];
        }
        ll move[r/2];
        for(ll i=0;i<r/2;i++)
        cin>>move[i];
        for(ll i=0;i<r/2;i++)
        {
          rotate(m,r+i,c-i,move[i],i+1);
        }

    return 0;
  }
