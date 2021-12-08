#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[]={9,6,3,7,5,2,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  sort(arr,arr+n);
  for(int i=0;i<arr.length;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}
