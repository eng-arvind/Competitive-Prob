#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,s,s1;
        int count1=0,count2=0;
        cin>>a>>b>>n>>s;
        for(int i=1;i<=a;i++)
        count1++;
        for(int i=1;i<=b;i++)
        count2++;
        if(count1>count2)
        s1=n*count2+count2;
        else
        s1=n*count1+count1;
        if(s==s1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
