#include<iostream>
using namespace std;
int main()
{
  int num;;
  cout<<"Enter a number:"<<endl;
  cin>>num;
  if(num>0)
  cout<<"You entered positive number:"<<num<<endl;
  else if(num<0)
  cout<<"You entered Negative number:"<<num<<endl;
  else
  cout<<"You entered 0";
  return 0;
  }
