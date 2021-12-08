#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin>>n;
    vector<ll> v;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
      ll a;
      cin>>a;
      v.push_back(a);
      sum += a;
    }
    if(n==1)
    cout<<v[0];
    else
    {
      if(sum%2==0)
      cout<<sum/2<<endl;
      else
      cout<<(sum/2)+1<<endl;
    }
    return 0;
  }
