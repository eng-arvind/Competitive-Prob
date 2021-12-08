#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ch;
    int index=0;
    for(int i=0;i<n;i++)
    {
      ch += s[i+index];
      index++;
    }
    cout<<ch<<endl;
  }
  return 0;
}
