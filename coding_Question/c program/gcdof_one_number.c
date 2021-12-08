#include<stdio.h>
void gcd(int,int);
int main()
{
  int n,b;
  printf("Enter the number\n");
  scanf("%d",&n);
  b=n-2;
  gcd(b,n);
}
void gcd(int b,int a)
{
  int i,c;
  for(i=1;i<=b && i<=a;i++)
  {
    if(a%i==0 && b%i==0)
    c=i;
  }
  if(c==1)
  printf("%d",b);
  else
  gcd(b-1,a);
}
