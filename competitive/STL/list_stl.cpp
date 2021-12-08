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

	list<int> ls;
	ls.push_back(20);
	ls.push_front(10);
	for (int i : ls)
		cout << i << " ";

	cout << endl << ls.size() << endl;
	list<int> copy(ls);
	for (int i : ls)
		cout << i << " ";
	list<int> init(4, 100);
	cout << endl;
	for (int i : init)
		cout << i << " ";


	return 0;
}