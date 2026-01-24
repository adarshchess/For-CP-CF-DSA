#include<bits/stdc++.h>

using namespace std;


int main(){
   int t=0;
  cin>>t;
  

  while(t>0){
     
     int x1=0;
     int z1=0;
     cin>>x1;
     cin>>z1;
     int x2=0;
     int z2=0;
     cin>>x2;
     cin>>z2;
     
     x1=x1*pow(10,z1);
     x2=x2*pow(10,z2);
     
     if(x1>x2){
         cout<<">"<<endl;
     }
     else if(x1==x2){
         cout<<"="<<endl;
     }
     else{
         cout<<"<"<<endl;
     }
            


    t--;
  }

  
  
  return 0;
  }
