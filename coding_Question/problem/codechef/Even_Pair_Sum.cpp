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
      ll a,b;
      cin>>a>>b;
      ll even1=0,odd1=0,even2=0,odd2=0;
      if(a%2!=0)
      {
        even1=a/2;
        odd1=(a/2)+1;
      }
      else
      {
        even1=a/2;
        odd1=a/2;

      }
      if(b%2!=0)
      {
        even2=b/2;
        odd2=(b/2)+1;
      }
      else
      {
        even2=b/2;
        odd2=b/2;
      }
      cout<<(even1*even2)+(odd1*odd2)<<endl;
    }
    return 0;
  }
