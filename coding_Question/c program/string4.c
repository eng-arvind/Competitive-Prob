#include<stdio.h>
#include<conio.h>
void main()
{
   char str[6];
   int i,index=0;
   printf("Enter the string\n");
   for(i=0;i<5;i++)
   {
     gets(str);
   }
   printf("the string is:");
   while(str[index]!='\0')
   {
     printf("\n");
   putchar(str[index]);
   index++;
 }
}
