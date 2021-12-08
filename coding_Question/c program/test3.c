#include<stdio.h>
#include <conio.h>
#include<string.h>
char * mul(char *, char);
char * add(char *, char *);
void main()
{

char *no1=(char * )malloc(100);
char *no2=(char *)malloc(100);
char *q="0";
char *p;
int i=0,j=0,t=0,l=0;
printf("\n Enter the large no ");
gets(no1);
printf("\n Enter the second no ");
gets(no2);

while(l<strlen(no2))
{
p=mul(no1,no2[l]);
for(j=1;j<=strlen(no2)-l-1;j++)
strcat(p,"0");
q=add(q,p);
l++;
}
printf("\n Multiplication is %s",q);
free(no1);
free(no2);
}


char * mul(char *x, char ch)
{
int i=0,j=0,t=0;
char *p=(char *)malloc(300);
char *a =(char *)malloc(300);
strcpy(p,x);
strrev(p);
while(p[i]!='\0')
{
a[j]=(p[i]-48)*(ch-48)+t;
t=a[j]/10;
a[j]=(a[j]%10)+48;
i++;
j++;
}
if(t!=0)
a[j]=t+48;
else
j--;
a[j+1]='\0';
strrev(a);
free(p);
return(a);
}
char * add(char *p, char *q)
{
char *t=(char *)malloc(300);
int i=0,j=0,x=0,a;
strrev(p);
strrev(q);
while(p[i]!='\0' && q[i]!='\0')
{
a=(p[i]-48)+(q[i]-48)+x;
x=a/10;
a=a%10;
t[i]=a+48;
i++;
}
while(i<strlen(p))
{
a=(p[i]-48)+x;
x=a/10;
a=a%10;
t[i]=a+48;
i++;
}
while(i<strlen(q))
{
a=(q[i]-48)+x;
x=a/10;
a=a%10;
t[i]=a+48;
i++;
}

if(x!=0)
t[i++]=x+48;
t[i]='\0';
strrev(t);
return(t);
}
