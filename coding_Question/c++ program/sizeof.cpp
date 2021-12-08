#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
  int a;
   float b;
    double c;
     long long l;
    string d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>l;
    cin>>d;
  float p = b/c;
    double q = b/a;
     int r = c/a;
     long long m = r + l;
     cout<<sizeof(p)<<" "<<sizeof(q)<<" "<<sizeof(r)<<" "<<sizeof(m)<<endl;
     cout<<sizeof(d)<<" "<<sizeof(d[d.length()-1]);
     return 0;
 }
