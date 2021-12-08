#include<stdio.h>
#include<conio.h>
void main()
{
  char str[20];
  int i;
  printf("Enter the string\n");
  gets(str);
  for(i=0;str[i]!='\0';i++);
  printf("The length of string=%d",i);
}
