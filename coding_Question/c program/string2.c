#include<stdio.h>
#include<conio.h>
void main()
{
  char str[10];
  int index=0;
  printf("Enter the string\n");
  gets(str);
  printf("The string is:\n");
  while(str[index]!='\0')
  {
  putchar(str[index]);
  printf("\n");
    index++;
  }
}
