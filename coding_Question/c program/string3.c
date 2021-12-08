#include<stdio.h>
#include<conio.h>
void main()
{
  char str[20];
  int index;
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
