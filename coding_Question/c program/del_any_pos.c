#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node* next;
};
typedef struct node * nodep;
nodep create();
nodep add();
void display(nodep);
nodep del_any_pos(nodep);
int main()
{
  nodep start=NULL,t;
  start=add();
  t=del_any_pos(start);
  display(t);
  getch();
  return 0;
}
nodep create()
{
  nodep t=(nodep)malloc(sizeof(struct node));
   if(t==NULL)
  {
    printf("overflow");
    exit(0);
  }
  t->next=NULL;
  printf("Enter data\n");
  scanf("%d",&t->info);
  return t;
}
nodep add()
{
  char ch;
  nodep start=NULL,t,t1;
  printf("Creation of list\n");
  do{
    t=create();
    if(start==NULL)
    start=t;
    else
    t1->next=t;
    t1=t;
    printf("Do you want to continue(y/Y):");
    scanf(" %c",&ch);
  }while(ch=='y' || ch=='Y');
  return start;
}
nodep del_any_pos(nodep start)
{
  int n,count=1;
  nodep temp,temp1;
  printf("Enter position where you want to delete\n");
  scanf("%d",&n);
temp=start;
if(n==1)
{
  start=start->next;
  temp->next=NULL;
  free(temp);
}
else if(n>1)
{
  while(temp->next!=NULL && count<n)
  {   temp1=temp;
    temp=temp->next;
    count++;
  }
if(n==count)
{
  temp1->next=temp->next;
  temp->next=NULL;
  free(temp);
}
else
printf("position is greater than size\n");
}
else
printf("position is negative\n");
return start;
}
void display(nodep start)
{
  nodep t;
  printf("List is: ");
  if(start==NULL)
  {
    printf("list is empty\n");
    exit(0);
  }
  t=start;
  while(t!=NULL)
  {
    printf("%d\t",t->info);
    t=t->next;
  }
}
