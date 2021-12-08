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
#define mod 10 00000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define ll long long int
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
 		ll n,k,an1=0,an2=0;
 		ll b1,b2;
 		ll m= INT_MAX;
 		cin>>n;
 		vector<ll> v(n);
 		for(ll i=0;i<n;i++)
 			cin>>v[i];
 		sort(v.begin(),v.end());
 		ll l=1,r=n-2;
 		if(n==2){
 			cout<<0<<endl;
 			continue;
 		}
 		else if(n==3)
 		{
 			cout<<min(v[1]-v[0],v[2]-v[1])<<endl;
 			continue;
 		}
 		for(ll i=0;i<n-1;i++)
 			an1+=abs(v[i]-v[(n-1)/2]);
		for(ll i=1;i<n;i++)
 			an2+=abs(v[i]-v[1+(n-1)/2]);
 		m=min(an1,an2);
 		while(l<r)
 		{
 			b2=v[n-1]-v[l];
 			b1=v[r]-v[0];
 			m=min(m,abs(b1-b2));
 			if(b1<b2)
 				l++;
 			else
 				r--;
 		}
 		cout<<m<<endl;
	}
	return 0;
}