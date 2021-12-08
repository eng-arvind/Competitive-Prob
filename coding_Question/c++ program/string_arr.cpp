#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  string s[]={"hello","I","am"};
  char ch[]="Hi my name is arvind";
   cout<<sizeof(s)/sizeof(s[0]);
   cout<<"\n";
  cout<<strlen(ch)<<endl;
  return 0;
}
