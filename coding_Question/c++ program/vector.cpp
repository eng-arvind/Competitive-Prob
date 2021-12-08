#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<string> v1;
v1.push_back("javaTpoint ");
v1.push_back("tutorial");
for(vector<string>::iterator itr=v1.begin();itr!=v1.end();++itr)
cout<<*itr;
//for(int i=0;i<v1.size();i++)
//cout<<v1.at(i)<<" ";
return 0;
}
