#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	for(int i=0;i<=n/2;i++)
	{
		for(int k=0;k<(n/2)-i;k++)
			cout<<" ";
		for(int j=1;j<=(2*i)+1;j++)
			cout<<"*";
		cout<<endl;
	}
	for(int i=(n/2)-1;i>=0;i--)
	{
		for(int k=(n/2)-i;k>0;k--)
			cout<<" ";
		for(int j=1;j<=(2*i)+1;j++)
			cout<<"*";
		cout<<endl;

	}
	return 0;
}
