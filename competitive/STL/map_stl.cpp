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

	map<int, int> mp;
	mp[1] = 4;
	mp[2] = 16;
	mp[5] = 32;
	mp[10] = 86;
	mp[8] = 96;
	mp[7] = 106;
	mp.insert({12, 126});
	mp.insert({4, 89});
	mp.erase(10);
	for (auto i : mp)
		cout << i.first << "-->" << i.second << endl;
	cout << "count:" << mp.count(8) << endl;
	auto it = mp.find(12);
	cout << (*it).first << " " << (*it).second << endl;
	return 0;
}