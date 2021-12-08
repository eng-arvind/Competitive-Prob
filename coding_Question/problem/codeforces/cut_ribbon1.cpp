#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n,a,b,c;
  cin>>n>>a>>b>>c;
  int p=0;
  int i=min(a,min(b,c));
  while(1)
  {
  i=n-i;
  if(i==0)
  break;
  p++;
  if(i==a || i==b)
  break;
   }
  cout<<p+1<<endl;
  return 0;
}
