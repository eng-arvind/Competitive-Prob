#include<stdio.h>
void gcd(int,int);
int prime(int,int);
int main()
{
  int a,b;
  printf("Enter the prime number\n");
  scanf("%d",&a);
  b=a-2;
  prime(b,a);
  return 0;
}
int prime(int b,int a)
{
  int i,c;
  c=0;
  for(i=1;i<b;i++)
  {
    if(b%i==0)
    c=i;
  }
  if(c!=1)
  gcd(b,a);
  else
  prime(b-1,a);
}

void gcd(int b,int a)
{
  int i,c;
  for(i=1;i<=b;i++)
  {
    if(b%i==0 && a%i==0)
    c=i;
  }
  if(c==1)
  {
  printf("%d",b);
  }
  else
  prime(b-1,a);

}
