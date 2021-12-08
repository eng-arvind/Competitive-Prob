#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
  node* left=NULL;
  int data;
  node* right=NULL;
};
typedef node* nnode;
nnode root=NULL;
nnode create()
{
  nnode newnode = new node();
  cout<<"Enter data\n";
  cin>>newnode->data;
  return newnode;
}
void insert(nnode r,nnode t)
{
  char c;
  cout<<"Enter where you want to insert\n";
  cin>>c;
  if(c=='l' || c=='L')
  {
    if(r->left==NULL)
    r->left=t;
    else
    insert(r->left,t);
  }
  if(c=='r' || c=='R')
  {
    if(r->right==NULL)
    r->right=t;
    else
    insert(r->right,t);
  }
}
void inorder(nnode r)
{
  if(r==NULL)
  return;
   inorder(r->left);
   cout<<r->data<<" ";
   inorder(r->right);
}
void preorder(nnode r)
{
  if(r==NULL)
  return;
   cout<<r->data<<" ";
   preorder(r->left);
   preorder(r->right);
 }
 void Postorder(nnode r)
 {
   if(r==NULL)
    return;
    Postorder(r->left);
    Postorder(r->right);
    cout<<r->data<<" ";
 }
int main()
{
  nnode temp=NULL,t;
  int ch;
  while(1)
  {
    cout<<"Enter your choice\n";
    cout<<"\n1.Insert\n2.Inorder\n3.Preorder\n4.Postorder\n5.Exit\n";
    cin>>ch;
    switch(ch)
    {
      case 1: t=create();
              if(root==NULL)
              root=t;
              else
              insert(root,t);
              break;
      case 2: inorder(root);
              break;
      case 3: preorder(root);
              break;
      case 4: Postorder(root);
              break;
      case 5: exit(0);
            break;
      default:cout<<"Enter correct choice\n";
            break;
    }
  }
  return 0;
}
