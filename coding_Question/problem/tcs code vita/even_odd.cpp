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
int cnt=0;
using namespace std;
void printAllKLengthRec(string set[], string prefix,
                                    int n, int k)
{
    if (k == 0)
    {
      cout<<prefix<<endl;
      int sm=0;
      string s;
      for(ll i=0;i<prefix.length();i++)
      {
        char c;
        c=prefix[i];
        if(isspace(c))
        {
          sm+=;
          s="";
        }

        else
        {
          s+=prefix[i];

        }

      }
      if(sm%2==0)
      cnt++;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        string newPrefix;
        newPrefix = prefix +" "+ set[i];
        printAllKLengthRec(set, newPrefix, n, k - 1);
    }
}
void printAllKLength(string set[], int k,int n)
{
    printAllKLengthRec(set, "", n, k);
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   ll l,h;
   cin>>l>>h;
   ll k;
   cin>>k;
    string set1[h-l+1];
    ll j=0;
    for(ll i=l;i<=h;i++)
    {
      set1[j++]=to_string(i);
    }
    printAllKLength(set1, k, h-l+1);
    cout<<cnt<<endl;
    return 0;

}
