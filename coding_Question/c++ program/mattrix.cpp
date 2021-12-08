#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
//code here
int i,j;
int k;
cin>>k;
int arr[k][k];
for(i=0;i<k;i++)
{
  for(j=0;j<k;j++)
  {
    cin>>arr[i][j];
  }
}
int* a=new int[k*k];
   int id[k];
   memset(id,0,sizeof(id));
    i=0;
   while(i<k*k){
       int id1=-1,mini=INT_MAX;
       for( j=0;j<k;j++){
           if(id[j]<k&&mini>arr[j][id[j]]){
               mini=arr[j][id[j]];
               id1=j;
           }
       }
       a[i]=mini;
       id[id1]++;
       i++;
   }
cout<<"Array is"<<endl;
for(i=0;i<k*k;i++)
{
  cout<<a[i]<<" ";
}
return 0;
}
