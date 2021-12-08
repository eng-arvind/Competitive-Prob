#include<bits/stdc++.h>
using namespace std;
#define MAX 5000
class Node
{
public:
  int data;
  Node* next;
  Node(int vl)
  {
    data=vl;
    next=NULL;
  }
};
Node* add(Node* head)
{
  Node* temp=head->next->next,*pt=head;
  queue<int> q;
  q.push(head->data);
  q.push(head->next->data);
  while(temp!=NULL)
  {
      int nm=q.front();
      q.pop();
      q.push(temp->data);
      int sm=temp->data+nm;
      temp->data=sm;
      temp=temp->next;
    }
    return head;

}
int main()
{
  Node* head=NULL;
  Node* newnode=new Node(1);
  head=newnode;
  Node* newnode1=new Node(2);
  newnode->next=newnode1;
  Node* newnode2=new Node(3);
  newnode1->next=newnode2;
  Node* newnode3=new Node(4);
  newnode2->next=newnode3;
  Node* newnode4=new Node(2);
  newnode3->next=newnode4;
    Node* newnode5=new Node(5);
    newnode4->next=newnode5;
    Node* newnode6=new Node(6);
    newnode5->next=newnode6;
      Node* newnode7=new Node(7);
      newnode6->next=newnode7;
    head=add(head);
    Node* temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<" ";
      temp=temp->next;
    }
  return 0;
}
