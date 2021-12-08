#include <iostream>
#define ll long long int
using namespace std;
unsigned int factorial(ll n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
} Shinchan Morning Hacks


int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    ll a,b;
    cin>>a>>b;
    cout<<factorial(a)/factorial(b)<<endl;

  }
    return 0;
}
