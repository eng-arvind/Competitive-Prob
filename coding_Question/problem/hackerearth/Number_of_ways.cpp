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
// ll findpath(vector<vector<char>>& matrix,ll n,ll m)
// {
//   vector<vector<ll>> paths(n, vector<ll>(m, 0));
//    if (matrix[0][0] == '.')
//        paths[0][0] = 1;
//    for(int i = 1; i < n; i++)
//    {
//        if (matrix[i][0] == '.')
//            paths[i][0] = paths[i-1][0];
//    }
//    for(int j = 1; j < m; j++)
//    {
//        if (matrix[0][j] == '.')
//            paths[0][j] = paths[0][j - 1];
//    }
//
//    for(int i = 1; i < n; i++)
//    {
//        for(int j = 1; j < m; j++)
//        {
//            if (matrix[i][j] == '.')
//                paths[i][j] = paths[i - 1][j] +
//                              paths[i][j - 1];
//        }
//    }
//    return paths[n - 1];
// }
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,m;
      cin>>n>>m;
      vector<vector<char> > matrix(n,vector<char>(m));
      for(ll i=0;i<n;i++)
      {
        for(ll j=0;j<m;j++)
        {
          char c;
          cin>>c;
        matrix[i].push_back(c);
      }
      }
      for(ll i=0;i<n;i++)
      {
        for(ll j=0;j<m;j++)
        cout<<matrix[i][j]<<" ";
        cout<<endl;
      }
    // ll uniq=findpath(matrix,n,m);
    //cout<<uniq<<endl

    }
    return 0;
  }
