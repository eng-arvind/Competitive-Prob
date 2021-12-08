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
#define w(t) int t; cin>>t; while(t--)
#define ll long long int
using namespace std;
ll fact(ll n)
{
  if(n==0)
  return 1;
  else
  return n*fact(n-1);
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

       ll x,n;
       cin>>x>>n;
       if(n<5)
       {
         ll f=fact(n);
        // cout<<"fact="<<f<<endl;
         string num=to_string(pow(x,f%10));
      //   string s=to_string(num);
         //cout<<num<<endl;
        cout<<num[num.length()-8];
       }
       else
       cout<<"1";
    return 0;
  }
