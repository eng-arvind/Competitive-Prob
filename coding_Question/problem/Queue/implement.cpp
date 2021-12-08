#include<bits/stdc++.h>
using namespace std;
#define max 100
class Queue
{
public:
  int front,rear;
  int a[max];
  Queue()
  {
    front=-1;
    rear=-1;
  }
  void Enque(int x)
  {
    if(rear<max)
    {
      if(front==-1) front++;
      a[++rear]=x;
      cout<<x<<"->Inserted\n";
    }
    else
    cout<<"Overflow\n";
  }
  void Deque()
  {
    if(front==-1)
    {
    cout<<"Underflow\n";
    return;
    }
    else
    {
      if(front>=rear)
      {
        rear=-1;
        front-1;
        return;
      }
      else
      {
      cout<<"Deleted: "<<a[front]<<endl;
      front++;
      }
    }
  }
  void display()
  {
    if(front==-1)
    {
      cout<<"Queue is empty\n";
      return;
    }
    else
    {
      cout<<"All element in queue\n";
      for(int i=front;i<=rear;i++)
      cout<<a[i]<<" ";
      cout<<"\n";
    }
  }
};
int main()
{
  Queue q;
  q.Enque(10);
  q.Enque(20);
  q.Enque(30);
  q.Enque(40);
  q.Enque(50);
  q.display();
  q.Deque();
  q.display();
  return 0;
}
