#include <iostream>
#include<sstream>
using namespace std;
int main() {
  string k;
  cout<<"Enter an integer value";
  getline(cin,k);
  stringstream ss;
  ss<<k;
   string index;
  cout<<"\n"<<"An integer value is : "<<k<<"\n";
  while(ss>>index)
  {
  cout<<"String representation of an integer value is : "<<index<<endl;
   }
  return 0;
}
