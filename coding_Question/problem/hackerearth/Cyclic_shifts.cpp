#include <iostream>
#include <bits/stdc++.h>
#include<bitset>
#include <vector>
#include<string>
#include <cstdlib>
#include <algorithm>
#define pb push_back
#define s second
#define f first
#define ll long long int
using namespace std;
int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   ll t;
   cin>>t;
   while(t--)
   {
     ll n,m;
     cin>>n>>m;
    char c;
    cin>>c;
    string bn=bitset<16>(n).to_string();
    if(c=='L')
    {
      string l_string;
      for(ll i=0;i<m;i++)
      {
        l_string+=bn[i];
      }
      bn.erase(0,m);
      bn=bn+l_string;
      cout<<binaryToDecimal(bn)<<endl;

    }
    else if(c=='R')
    {
      string r_string;
      for(ll i=16-m;i<16;i++)
      {
        r_string+=bn[i];
      }
      bn.erase(16-m,m);
      bn=r_string+bn;
      cout<<binaryToDecimal(bn)<<endl;
    }
  }
    return 0;
  }
