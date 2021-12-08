#include <bits/stdc++.h>
#include <vector>
#include<bitset>
#include<string>
#include<sstream>
#include <algorithm>
#define pb push_back
#define s second
#define f first
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define setbits(x) __builtin_popcountll(x)
#define mod 10 00000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define ll long long int
using namespace std;
void create(vector<int> graph[],int u,int v)
{
	graph[u].push_back(v);
	graph[v].push_back(u);
}
void print_graph(vector<int> graph[],int V)
{
	for(int i=1;i<V;i++)
	{
		cout<<"["<<i<<"] :";
		for(auto x: graph[i])
			cout<<x<<" ";
		cout<<"\n";
	}
}
void dfs_traverse(vector<int> graph[],int V)
{
	  stack<int> st;
	  vector<int> ans;
	  int visited[V]={false};
	  st.push(0);
	  while(!st.empty())
	  {
	  	int node = st.top();
	  	st.pop();
	  	ans.push_back(node);
	  	visited[node]=true;
	  	for(auto x : graph[node])
	  	{
	  		if(!visited[x])
	  		{
	  			st.push(x);
	  			visited[x]=true;
	  		}
	  	}
	  }
	  for(int i=0;i<ans.size();i++)
	  	cout<<ans[i]<<" ";
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
 	int V=7;
 	vector<int> graph[V];
 	create(graph,0,1);
	create(graph,0,2);
	create(graph,1,3);
	create(graph,1,4);
	create(graph,2,5);
	create(graph,2,6);
	create(graph,3,2);
	print_graph(graph,V);
	cout<<"Dfs:"<<endl;
	dfs_traverse(graph,V);

    return 0;
  }