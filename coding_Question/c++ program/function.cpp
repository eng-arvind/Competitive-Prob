#include<iostream>
using namespace std;
void fun()
{
  static int i=0;
  int j=0;
  i++;
  j++;
  cout<<"i="<<i<<"and j="<<j<<endl;
}
int main()
{
  fun();
  fun();
  fun();
  return 0;
}
