#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n;
 	cin>>n;
 	ll ar[n];
 	ll sm=0;
 	for(ll i=0;i<n;i++)
 	{
 		cin>>ar[i];
 		sm+=ar[i];
 	}
 	ll i=1;
 	while(pow(i,3)<sm)
 		i++;
 	if(pow(i,3)==sm)
 		cout<<"Yes"<<endl;
 	else
 		cout<<pow(i,3)-sm<<endl;
 	return 0;
  }
