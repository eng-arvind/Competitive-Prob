#include <iostream>
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
#define ll int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll p_min,q_max,r_min,s_max;
    cin>>p_min>>q_max>>r_min>>s_max;
    int ans=0;
    if((p_min<1501 && p_min>0)
    &&(q_max<1501 && q_max>0)&&
    (r_min<1501 && r_min>0)&&
    (s_max<1501 && s_max>0))
    {
      for(int i=p_min;i<=q_max;i++)
      {
        for(int j=r_min;j<=s_max;j++)
        {
          int rw=i;
          int cw=j;
          int all=rw*cw;
          int cnt=0;
          while(rw && cw)
          {
            cnt++;
            if(rw>cw)
            rw=rw-cw;
            else
            cw=cw-rw;
          }
          ans+=cnt;
        }
      }
      cout<<ans<<endl;
    }
    return 0;
  }
