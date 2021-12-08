#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int l=1,h=n/2+1;
      bool y=false;
      while(l<h)
      {
        if(int((pow(h,2)-pow(l,2)))==n)
        {
          y=true;
          break;
        }
        else if(int((pow(h,2)-pow(l,2)))>n)
        h=h-2;
        else if(int((pow(h,2)-pow(l,2)))<n)
        l=l+2;
      }
      if(y)
      cout<<h<<" "<<l<<endl;
      else
      cout<<-1<<endl;
    }
    return 0;
}
