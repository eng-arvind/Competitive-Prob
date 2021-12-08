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

	vector<int> vBinary;
	vBinary.push_back(10);
	vBinary.push_back(20);
	vBinary.push_back(30);
	vBinary.push_back(40);
	vBinary.push_back(50);
	vBinary.push_back(60);
	cout << binary_search(vBinary.begin(), vBinary.end(), 90) << endl;
	cout << lower_bound(vBinary.begin(), vBinary.end(), 50) - vBinary.begin() << endl;
	cout << upper_bound(vBinary.begin(), vBinary.end(), 50) - vBinary.begin() << endl;
	//rotate vector
	rotate(vBinary.begin(), vBinary.begin() + 2, vBinary.end());
	for (int i : vBinary)
		cout << i << " ";


	return 0;
}