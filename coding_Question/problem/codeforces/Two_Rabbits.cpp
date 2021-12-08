#include<iostream>
#include<bits/stdc++.h>
#define ull unsigned long long int
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    unsigned long long int x,y,a,b;
    cin>>x>>y>>a>>b;
    ull k=y-x;
    ull p=a+b;
    if(k%p==0)
    cout<<k/p<<endl;
    else
    cout<<-1<<endl;
  }
  return 0;
}
