#include<bits/stdc++.h>

using namespace std;


int main(){
   int t=0;
  cin>>t;
  

  while(t>0){
      long long lim=1e18;
     
     long long x1=0;
     int z1=0;
     cin>>x1;
     cin>>z1;
     long long x2=0;
     int z2=0;
     cin>>x2;
     cin>>z2;
     
 while(z1>0&&x1<=lim/10){
     x1*=10;
     z1--;
 }
  while(z2>0&&x2<=lim/10){
     x2*=10;
     z2--;
 }
 
 
 if(z1>z2){  // pehle break hogya ho due to overflow
     cout<<">"<<endl;
 }
 else if(z1<z2){
     cout<<"<"<<endl;
 }
 
 else{
     
      if(x1>x2){
     cout<<">"<<endl;
 }
  else if(x1<x2){
     cout<<"<"<<endl;
 }
  else{
     cout<<"="<<endl;
 }
 }
     
 
 
 
 

            


    t--;
  }

  
  
  return 0;
  }
