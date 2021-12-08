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
      ll a,b;
      cin>>a>>b;
      ll n;
      cin>>n;
      double lst[n];
      for(ll i=0;i<n;i++) cin>>lst[i];
      double sm1;
      for(ll i=0;i<a;i++)
      sm1+=lst[i];
      double sm2;
      for(ll i=0;i<b;i++)
      sm2+=lst[i];
      double m_a[20]={0};
      m_a[0]=sm1/a;
      double m_b[20]={0};
      m_b[0]=sm2/b;
      ll j=1;
      for(ll i=b;i<n;i++)
      {
        j+=1;
        sm1+=(-lst[i-a]+lst[i]);
        m_a[j]=sm1/a;
      }
      j=1;
      for(ll i=b;i<n;i++)
      {
        j+=1;
        sm2+=(-lst[i-b]+lst[i]);
        m_b[j]=sm2/b;
      }
      ll abv=0;
      ll cnt=0;
      if(m_a[b-a]>m_b[0] && abv==0)
      abv=1;
      if(m_a[b-a]<m_a[0])
      abv=-1;
      for(ll i=1;i<n-b+1;i++)
      {
        if(m_a[b-a+i]<m_b[i] && abv==1)
        {
          cnt+=1;
          abv=-1;
        }
        else if(m_a[b-a+1]>m_b[i] && abv==-1)
        {
          cnt+=1;
          abv=1;
        }
      }
      cout<<cnt<<endl;

    return 0;
  }
