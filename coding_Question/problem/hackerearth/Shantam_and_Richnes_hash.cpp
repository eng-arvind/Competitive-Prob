#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
   ll t;
   cin>>t;
   while(--t>=0){
       ll n,m;
       cin>>n>>m;
       ll hashmap[n+5]={0};
       ll l,r,c,p,q,s;
       ll l1,r1,c1;
       cin>>l>>r>>c>>p>>q>>s;
       while(--m>=0){
          hashmap[l]=hashmap[l]+c;
          hashmap[r+1]=hashmap[r+1]-c;
          l1=(l*p+r)%n+1;
          r1=(r*q+l)%n+1;
          if(l1>r1) swap(l1,r1);
          c1=(c*s)%1000000+1;
          l=l1;
          r=r1;
          c=c1;
       }
       ll temp=hashmap[1],pos=1,current=hashmap[1];
       for(ll i=2;i<=n;i++){
             current=current+hashmap[i];
             if(current>temp){
                pos=i;
                temp=current;
             }
       }

       cout<<pos<<" "<<temp<<"\n";
   }
}
