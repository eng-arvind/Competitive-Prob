#include<iostream>
#include<math.h>
#define ll unsigned long long int
using namespace std;
int main()
{
  ll t;
  cin>>t;
  ll a[]={1,9,9,9,9,9,9,9,9,9,9,9};
  ll s=8,count=1,i=0,k=1;
  while(t--)
  {
    if(count==10)
    {
      a[i]++;
      a[k+1]=9;
      k=i+1;
      a[k]=s;
      s--;
      k++;
    }

    for(int j=0;j<12;j++)
    cout<<a[j];
    cout<<endl;
    swap(a[k],a[k+1]);
    count++;
  }
  return 0;
}
