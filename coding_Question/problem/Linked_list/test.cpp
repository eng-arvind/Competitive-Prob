#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
  int data;
  Node* next;
public:
  Node(int x)
  {
    data=x;
    next=NULL;
  }
};
typedef Node* np;
np Ins(np head,int x)
{
  np newnode=new Node(x);
  if(head==NULL)
  head=newnode;
  return head;
}
int main()
{
  np head=NULL;
  head=Ins(head,10);
  cout<<head->data;
  Ins(head,20);
  cout<<head->data;
  return 0;
}
