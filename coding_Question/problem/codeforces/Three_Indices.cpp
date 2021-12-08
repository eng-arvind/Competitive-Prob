#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll p=0;p<n;p++)
    {
      ll a;
      cin>>a;
      v.push_back(a);
    }
    bool flag=false;
    for(ll i = 1; i < n - 1; i++) {
  		if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
  			cout << "YES" << endl;
  			cout <<i<<' '<<i+1<<' '<<i+2<<endl;
        flag=true;
        break;
  }
}
if(flag==false)
cout<<"No\n";
}
  return 0;
}
