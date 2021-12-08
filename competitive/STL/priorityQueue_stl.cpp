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
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	//max priority queue
	priority_queue<int> mx;
	//min priority queue
	priority_queue<int, vector<int>, greater<int> > mn;
	mx.push(1);
	mx.push(2);
	mx.push(3);
	mx.push(4);
	mx.push(5);
	cout << mx.top() << endl;
	mn.push(1);
	mn.push(2);
	mn.push(3);
	mn.push(4);
	mn.push(5);
	cout << mn.top() << endl;

	mx.pop();
	cout << mx.top() << endl;

	mn.pop();
	cout << mn.top() << endl;
	cout << mx.size() << " " << mn.size() << endl;
	int sz = mx.size();
	for (int i = 0; i < sz; i++) {
		cout << mx.top() << " ";
		mx.pop();
	}



	return 0;
}