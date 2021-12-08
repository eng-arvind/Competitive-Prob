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
np head=NULL;
void Insert(int x)
{
  Node* newnode=new Node(x);
  if(head==NULL)
  head=newnode;
  else
  {
    np temp=head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newnode;
  }
}
void traverse(Node* head)
{
  Node* temp=head;
  if(head==NULL)
  {
    cout<<"Linked List is Empty\n";
    return;
  }
  else
  {
    cout<<"Linked List is:\n";
    while(temp!=NULL)
    {
      cout<<"["<<temp->data<<"]"<<"->";
      temp=temp->next;
    }
    cout<<"\n";
  }
}
void Insert_beg(int x)
{
  np newnode = new Node(x);
  if(head==NULL)
  head=newnode;
  else
  {
    newnode->next=head;
    head=newnode;
  }
  cout<<"Insert at Beg:"<<x<<"\n";
}
void Insert_end(int x)
{
  np newnode =new Node(x);
  if(head==NULL)
  head=newnode;
  else
  {
    np temp=head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newnode;
  }
  cout<<"Insert at End: "<<x<<"\n";
}
int main()
{
  Insert(10);
  Insert(20);
  Insert(30);
  Insert(40);
  Insert_beg(5);
  Insert_beg(1);
  Insert_end(50);
  traverse(head);
  return 0;
}
