#include<bits/stdc++.h>
using namespace std;
int main()
{
bool ans=true;
string a="Arxvind";
string b="vindar";
transform(a.begin(),a.end(),a.begin(),::tolower);
 for(int i=0;i<a.length();i++)
 {
 bool is=false;
  for(int j=0;i<b.length();j++)
  {
  if(a[i]==b[j])
  {
    is=true;
    break;
  }
  }
  if(is)
  continue;
  else
  {
  cout<<"false";
  ans=false;
  break;
  }
 }
 if(ans)
 cout<<"true";
}
