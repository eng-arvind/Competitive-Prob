#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<n;
  cout<<"hello";
   ll n;
   cin>>n;
   ll a[n],b[n];
   for(ll i=0;i<n;i++)
   	cin>>a[i];
   for (ll i = 0; i < n;i++)
    {
    	ll k;
    	cin>>k;
    	b[i]=k/a[i];
    }
    ll mn=*min_element(b,b+n);
    cout<<mn<<endl;
    return 0;
}
