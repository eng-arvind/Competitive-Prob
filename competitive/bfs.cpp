#include<bits/stdc++.h>
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
	queue<int> q;
	vector<int> ans;
	int distance[V]={0};
	int visited[V]={false};
	q.push(1);
	while(!q.empty())
	{
		int node  = q.front();
		q.pop();
		ans.push_back(node);
		visited[node]=true;
		for(auto x:graph[node])
		{
			if(!visited[x])
			{
				q.push(x);
				distance[x]=distance[node]+1;
				visited[x]=true;
			}
		}

	}
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	cout<<endl;
	cout<<"distance:"<<endl;
	for(int i=1;i<V;i++)
		cout<<distance[i]<<" ";
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int V=6;
	vector<int> graph[V];
	create(graph,1,2);
	create(graph,1,3);
	create(graph,2,4);
	create(graph,2,5);
	create(graph,4,5);
	create(graph,3,5);
	create(graph,3,2);
	print_graph(graph,V);
	cout<<"dfd:"<<endl;
	dfs_traverse(graph,V);
	return 0;

}