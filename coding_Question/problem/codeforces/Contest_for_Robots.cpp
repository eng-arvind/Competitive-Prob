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
    ll count=0;
    for(int i=0;i<n;i++)
    {
      ll a;
      cin>>a;
      if(a==1)
      count++;
    }
    ll count1=0;
    for(int i=0;i<n;i++)
    {
      ll b;
      cin>>b;
      if(b==1)
      count1++;
    }
    count=count+count1;
    if(count==0)
    cout<<-1<<endl;
    else
    cout<<count/2<<endl;
    return 0;
  }
