#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool find_xor(int l,int r)
{
  int odd_number = (l-r)/2;
  if(l%2==1||r%2==1)
  {
    odd_number++;
  }
  if(odd_number%2==0)
  return true;
  else
  return false;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int l,r;
    cin>>l>>r;
    if(find_xor(l,r))
    cout<<"Even"<<endl;
    else
    cout<<"Odd"<<endl;
  }
  return 0;
}