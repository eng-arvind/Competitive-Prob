#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Queue
{
  int front,rear,size;
  int* ar;
public:
  Queue(int n)
  {
    front=-1;
    rear =0;
    size=n;
    ar = new int(n);
  }
  void inqueue(int x)
  {
    if(rear<size)
    {
      if(front==-1)
      front++;
      ar[rear++]=x;
    }
    else
    {
      cout<<"Overflow"<<endl;
      exit(1);
    }
  }
  int dqueue()
  {
    if(front<rear && front!=-1)
    {
      int x=ar[front];
      front++;
      return x;
    }
    else
    {
      cout<<"Underflow"<<endl;
      exit(1);
    }
  }
  void qdisplay()
   {
       int i;
       if (front == rear)
        {
           printf("\nQueue is Empty\n");
           return;
       }
       for (i = front; i < rear; i++)
        {
           printf(" %d <-- ", ar[i]);
       }
       return;
   }
};
int main()
{
  cout<<"Enter size of queue"<<endl;
  int n;
  cin>>n;
  Queue q(n);
  q.inqueue(1);
  q.inqueue(2);
  q.inqueue(3);
  q.inqueue(4);
  q.inqueue(5);
  cout<<"Deleted:"<<q.dqueue()<<endl;
  q.qdisplay();
}
