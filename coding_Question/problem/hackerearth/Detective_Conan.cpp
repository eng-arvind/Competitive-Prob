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
#define mod 1000000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int x,y,z,p;
    cin>>x>>y>>z>>p;
    string str;
    cin>>str;
    ll a=0;
    for(ll i = 0; i<str.length();i++){
        if(str[i] == '1')a+=x;
        if(str[i] == '2')a+=y;
        if(str[i] == '3')a+=z;
        if(str[i] == '4')a+=p;
    }
    cout <<a<< endl;
    return 0;
}
