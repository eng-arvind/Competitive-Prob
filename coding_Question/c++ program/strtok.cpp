#include<iostream>
#include<cstring>
using namespace std;
int main() 
{
   char s[]="a r v i n d";
  char* token=strtok(s," ");
  while(token!=NULL)
  {
    cout<<token<<endl;
    token=strtok(NULL," ");
  }
  return 0;
}
