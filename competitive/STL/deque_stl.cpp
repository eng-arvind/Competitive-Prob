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
	deque<int> dq;
	dq.push_back(20);
	dq.push_front(10);
	dq.push_front(30);
	dq.push_back(40);

	for (int i : dq)
		cout << i << " ";
	dq.pop_back();
	cout << endl;
	for (int i : dq)
		cout << i << " ";
	dq.pop_front();
	cout << endl;
	for (int i : dq)
		cout << i << " ";
	cout << endl << dq.size() << endl;
	cout << dq.at(1) << endl;
	cout << dq.front() << " " << dq.back() << endl;
	dq.erase(dq.begin(), dq.begin() + 1);
	for (int i : dq)
		cout << i << " ";

	return 0;
}