#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long int t;
  cin>>t;
  while(t--)
  {
    string a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<a.length();i++)
    {
    if(a[i]==c[i])
    swap(b[i],c[i]);
    else if(b[i]==c[i])
    swap(a[i],c[i]);
    else
    swap(a[i],c[i]);
    }
    if(a==b)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
  }
  return 0;
}
