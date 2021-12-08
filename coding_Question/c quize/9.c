#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *a;
  a=(int*)malloc(sizeof(int));
  free(a);
  return 0;
}
//No error
