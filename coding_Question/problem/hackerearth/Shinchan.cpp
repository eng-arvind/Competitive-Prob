#include<bits/stdc++.h>
using namespace std;
int main()
  {
    int m,s,t;
      t=0;
      string st;
      cin>>st;
      string s1,s2;
      int i;
      for(i=0;i<st.length();i++)
      {
        if(st[i]==':')
        break;
        else
        s1+=st[i];
      }
      i++;
      for( ;i<st.length();i++)
      {

        s2+=st[i];
      }
      m=stoi(s1);
      s=stoi(s2);
      while(m/10+m%10*10!=s)
    {
      s++,t++;
      if(s>59)m++,s=0;
      if(m>23)m=0;
    }
      cout<<t;
  }
