#include<stdio.h> 
#include<string.h>
int main()
{
char key[32][10]={"auto","break","case",
"const","continue","default","do",
"double","else","enum","extern",
"float","for","goto","if","char",
"int","long","register","return",
"short","signed","sizeof","static",
"struct","switch","typedef","union",
"unsigned","void","volatile","while"};
int i,t=0;
char str[20];
printf("Enter string\n");
scanf("%s",str);
for(i=0;i<32;i++)
{
    if(strcmp(str,key[i])==0)
    {
        t=1;
        break;
    }
}
if(t==1)
printf("found");
else
printf("Not found");
}