#include<iostream>
using namespace std;
int main()
{
  int number;
  cout<<"Enter an Integer:";
  cin>>number;
  if(number>0)
  {
    cout<<"you Entered positive integer:"<<number<<endl;
  }
  else
  cout<<"Negative number"<<endl;
  cout<<"This statement is always executed.";
  return 0;
}
