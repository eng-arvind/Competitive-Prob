#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<bitset>
#include<string>
#include<sstream>
#include <algorithm>
#define pb push_back
#define s second
#define f first
using namespace std;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin>>n;
    string bridge;
    cin>>bridge;
    string groom;
    cin>>groom;
    int r1=0;
    while(r1<n)
    {
      int m1;
      for(int i=0;i<groom.length();i++)
      {
        if(groom[i]==bridge[0])
        {
          m1=i;
          break;
        }
        else
        m1=-1;
      }
      if(m1<0)
      break;
      groom.erase(m1+1,1);
      bridge.erase(1);
      r1++;
    }
    cout<<bridge.length()<<endl;
    return 0;
  }
