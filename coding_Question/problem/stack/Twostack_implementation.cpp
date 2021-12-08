#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class twostack
{
  int* ar;
  int size;
  int tp1,tp2;
public:
  twostack(int n)
  {
    size = n;
    ar = new int[n];
    tp1 =-1;
    tp2 = n;
  }
  void push1(int x)
  {

    if(tp1<tp2-1)
    {
      ar[++tp1]= x;
    }
    else
    {
      cout<<"Stack overflow"<<endl;
      exit(1);
    }
  }
  void push2(int x)
  {
    if(tp2-1>tp1)
    {
      ar[--tp2] = x;
    }
    else
    {
      cout<<"Overfloaw"<<endl;
      exit(1);
    }
  }
  int pop1()
  {
    if(tp1>=0)
    {
      int x=ar[tp1];
      tp1--;
      return x;
    }
    else
    {
      cout<<"Underflow"<<endl;
      exit(1);
    }
  }
  int pop2()
  {
    if(tp2<size)
    {
      int x=ar[tp2];
      tp2++;
      return x;
    }
    else
    {
      cout<<"Underflow"<<endl;
      exit(1);
    }
  }
};
int main()
{
  cout<<"Enter size of twostack"<<endl;
  int n;
  cin>>n;
  twostack st(n);
  st.push1(4);
  st.push1(4);
  st.push2(5);
  st.push2(5);
  cout<<"poped:"<<st.pop1()<<endl;
  cout<<"poped:"<<st.pop2()<<endl;
  return 0;
}
