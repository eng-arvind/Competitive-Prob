#include <stdio.h>
void fun(int * a,int *b)
{
  int t;
  t=*a;
  *a=*b;
  *b=t;
}
int main()
{
  int a=1,b=2;
  fun(&a,&b);
  printf("%d %d",a,b);
  return 0;

}
