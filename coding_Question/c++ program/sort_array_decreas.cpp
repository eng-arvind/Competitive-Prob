#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[20],n;
  cout<<"Enter the size of array"<<'\n';
  cin>>n;
  cout<<"Enter the element of array"<<'\n';
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n,greater<int>());
  cout<<"Sorted array is:"<<'\n';
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
  return 0;
}
