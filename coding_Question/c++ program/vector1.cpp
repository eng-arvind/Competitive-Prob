#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  for(int i=0;i<v.size();i++)
  cout<<v.at(i)<<" ";
  return 0;
}