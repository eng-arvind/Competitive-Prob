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
void create(vector<int> graph[], int u, int v)
{
	graph[u].push_back(v);
	graph[v].push_back(u);
}
void print_graph(vector<int> graph[], int n)
{
	for (int i = 1; i < n; i++)
	{
		cout << "[" << i << "] :";
		for (auto x : graph[i])
			cout << "->" << x;
		cout << "\n";

	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n = 6;
	vector<int> graph[n];
	create(graph, 1, 2);
	create(graph, 1, 3);
	create(graph, 1, 4);
	create(graph, 2, 4);
	create(graph, 4, 5);
	create(graph, 3, 5);
	print_graph(graph, n);

	return 0;
}