#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define max 100
class Stack
{
public:
  int a[max];
  int top;
  Stack()
  {
    top=-1;
  }
  bool push(int x);
  int pop();
  int peek();
  bool isEmpty();
  int disply();
};
bool Stack::push(int x)
{
  if(top==max-1)
  {
      cout<<"overflow\n"<<endl;
      return false;
  }
  else
  {
    a[++top]=x;
    return true;
  }
}
int Stack::pop()
{
  if(top<0)
  {
    cout<<"Underflow\n";
    return 0;
  }
  else
  {
    int x=a[top--];
    return x;
  }
}
int Stack::peek()
{
  if(top<0)
  {
    cout<<"Underflow\n";
    return 0;
  }
  else
  return a[top];
}
bool Stack::isEmpty()
{
  if(top<0)
  {
    cout<<"Empty\n";
    return true;
  }
  else
  {
    cout<<"Not empty\n";
    return false;
  }
}
int Stack::disply()
{
  for(int i=0;i<=top;i++)
  cout<<a[i]<<" ";
  return 0;
}
int main()
{
  class Stack s;
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  s.disply();
  cout<<"\npop value: "<<s.pop();
  return 0;
}
