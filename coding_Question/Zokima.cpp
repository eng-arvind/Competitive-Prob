#include<bits/stdc++.h>
using namespace std;
int main()
{
  cout<<"Enter Number Between 1000 and 9999"<<endl;
  int num;
  cin>>num;
  cout<<"Enter a Interger d Between 0 and 9"<<endl;
  int d;
  cin>>d;
  cout<<"Enter a character"<<endl;
  char ch;
  cin>>ch;
  char start,last;
  start = (char)ch-1;
  last = (char)ch+1;
  int n1 = num/1000;
  int n2 = (num/10)%10;
  cout<<"Output: "<<start<<n1<<d<<n2<<d<<last<<endl;
    return 0;
}
