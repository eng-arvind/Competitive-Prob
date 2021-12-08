#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{  
  int t;
  cin>>t;
  vector<string> v;
  while(t--)
  {
    string st;
    cin>>st;
    v.push_back(st);
  }
  sort(v.begin(),v.end());
  cout<<"output:"<<endl;
  for(int i=0;i<v.size();i++)
  cout<<v[i]<<endl;
  return 0;
}
