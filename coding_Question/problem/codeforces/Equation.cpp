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
bool prime(ll n)
{
      for ( ll i = 2; i <= n / 2; ++i)
      {
       if (n % i == 0)
           return false;
       }
      return true;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin>>n;
    ll a=8;
    if(prime(a+n))
    {
      cout<<a+n+1<<" "<<a+1<<endl;
    }
    else
    {
      cout<<a+n<<" "<<a<<endl;
    }
    return 0;
  }
