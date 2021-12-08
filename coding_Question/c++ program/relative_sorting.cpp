#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int n,m;
  int p=0;
	cin>>n;
	cin>>m;
  int a1[n],a2[m];
	for(int i=0;i<n;i++)
  {
	cin>>a1[i];
  }
	for(int j=0;j<m;j++)
  {
	cin>>a2[j];
  }
  for(int i=0;i<m;i++)
  {
    int k=a2[i];
    for(int j=0;j<n;j++)
    {
      if(k==a1[j]);
      {
      int s=a1[p];
      a1[p]=a1[j];
      a1[j]=s;
      p++;
      }
    }
  }
  for(int i=0;i<n;i++)
  cout<<a1[i]<<" ";
	return 0;
}
