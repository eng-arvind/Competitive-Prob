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
      ll n;
      cin>>n;
      string s;
      cin>>s;
      double cnt=0;
      for(int i=0;i<s.length();i++)
      {
        if(s[i]=='1')
        cnt++;
      }
      double rm=120-n;
      rm=rm+cnt;
      double tl=(rm/120)*100;
    //  cout<<tl<<endl;
     if(tl>=75)
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
    }
    return 0;
  }
