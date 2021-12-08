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

vector<int> duplicates(int a[], int n)
{
  // map<int,int> mp={{0,0}};
  //    vector<int> v;
  //  for(int i=0;i<n;i++)
  //  {
  //      mp[a[i]]++;
  //  }
  //  map<int,int> ::iterator itr;
  //  for(itr=mp.begin();itr!=mp.end();itr++)
  //  {
  //      if((itr->s)>1)
  //      v.push_back(itr->f);
  //  }
  //  if(v.empty())
  //  {
  //      v.push_back(-1);
  //      return v;
  //  }
  //  else
  //  {
  //      sort(v.begin(),v.end());
  //      return v;
  //  }
  //second approch
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    int index=a[i]%n;
    a[index]+=n;
  }
  for(int i=0;i<n;i++)
  {
    if(a[i]/n>1)
    v.pb(i);
  }
  if(v.empty())c
  {
    v.pb(-1);
    return v;
  }
  else
  return v;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int> ar;
         ar=duplicates(a,n);
        for(int i=0;i<ar.size();i++)
        cout<<ar[i]<<" ";
    return 0;
  }
