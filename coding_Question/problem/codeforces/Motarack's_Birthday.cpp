#include<iostream>
#include <cstdlib>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
     int mx=INT_MIN,mn=INT_MAX;
    for(int i =0;i<n;i++)
    {
    if(i>0 && a[i]==-1 && a[i-1] !=-1)
      mn=min(mn,a[i-1]),mx=max(mx,a[i-1]);
    if(i<n-1&&a[i]==-1 && a[i+1] !=-1)
      mn=min(mn,a[i+1]),mx=max(mx,a[i+1]);
    }
    int k=(mn+mx)/2;
     int m=0;
    for(int i=0;i<n;i++)
    {
		if(a[i]==-1)
		a[i]=k;
		if(i)
		m=max(m,abs(a[i]-a[i-1]));
	     }
       cout<<m<<" "<<k<<endl;
  }
  return 0;
}
