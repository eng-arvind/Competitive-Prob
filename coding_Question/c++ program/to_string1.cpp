#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  cin.ignore();
  string st=to_string(n);
  cout<<st<<endl;
  return 0;
}
