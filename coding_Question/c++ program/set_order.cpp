#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_set<string> str;
str.insert("code");
str.insert("in");
str.insert("c++");
str.insert("is");
str.insert("fast");
unordered_set<string>::iterator itr;
for(itr=str.begin();itr!=str.end();itr++)
{
  cout<<*itr<<endl;
}
return 0;
}
