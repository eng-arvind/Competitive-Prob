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
    ios_base::sync_with_stdio(false), cout.tie(0);
      ll ar[100];
      ll z=0;
      int it;
    int  sum=0;
      while((scanf("%d",&it))!=-1)
      {
        sum+=it;
        ar[z]=it;
        z++;
      }
      ll dp[z+1][sum+1];
      for(ll i=0;i<=z;i++)
      {
        dp[i][0]=1;
      }
      for(ll i=1;i<=sum;i++)
      {
        dp[0][i]=0;
      }
      int sol;
      for(ll i=1;i<=z;++i)
      {
        for(ll j=1;j<=sum;++j)
        {
          dp[i][j]=dp[i-1][j];
          if(ar[i-1]<=j)
          dp[i][j]=dp[i][j] | dp[i-1][j-ar[i-1]];
        }
      }
      sol=sum;
      for(ll i=sum/2;i>=0;i--)
      {
        if(dp[z][i])
        {
          sol=sum-i;
          break;
        }
      }
      cout<<sol;
    return 0;
  }
