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
int solve(int scr[],int n)
{
  int ps=0,s;
  int d[10]={0};
  for(int i=0;i<n;i+=2)
  {
    s=scr[i]/10;
    for(int j=i+2;j<n;j+=2)
    {
      if(s==scr[j]/10)
      {
        if(d[s]<2)
        d[s]++;
      }
    }
  }
  for(int i=1;i<n;i+=2)
  {
    s=scr[i]/10;
    for(int j=i+2;j<n;j+=2)
    {
      if(s==scr[j]/10)
      {
        if(d[s]<2)
        d[s]++;
      }
    }
  }
  for(int i=0;i<10;i++)
  ps+=d[i];
  return ps;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin>>n;
    int ar[1000];
    for(int i=0;i<n;i++)cin>>ar[i];
    int scr[100];
    for(int i=0;i<n;i++)
    {
      int num=ar[i];
      int a,b,c;
      int l,s,sr;
      a=num%10;
      num/=10;
      b=num%10;
      num/=10;
      c=num%10;
      num/=10;
      l=max(a,b);
      l=max(l,c);
      s=min(a,b);
      s=min(s,c);
      sr=l*11+s*7;
      sr=sr%100;
      scr[i]=sr;
    }
    int pr=solve(scr,n);
    cout<<pr<<endl;
    return 0;
  }
