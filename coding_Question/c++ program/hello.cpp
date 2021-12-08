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
string solve(ll n,string &s)
{
    string ans="";
    unordered_map<string,char> m;
    m["0000"]='a';
    m["0001"]='b';
    m["0010"]='c';
    m["0011"]='d';
    m["0100"]='e';
    m["0101"]='f';
    m["0110"]='g';
    m["0111"]='h';
    m["1000"]='i';
    m["1001"]='j';
    m["1010"]='k';
    m["1011"]='l';
    m["1100"]='m';
    m["1101"]='n';
    m["1110"]='o';
    m["1111"]='p';
   
    for(ll i=0;i<n;i+=4)
    {
    	string sub=s.substr(i,4);
    	ans+=m[sub];
    }
    return ans;
}
int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      string s;
      cin>>s;
      cout<<solve(n,s)<<endl;
    }
    return 0;
  }
