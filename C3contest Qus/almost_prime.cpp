#include<bits/stdc++.h>

using namespace std;


bool isprime(int n){
    
     for(int i=2;i*i<=n;i++){
         if(n%i==0){
             return false;
         }
         
     }
     return true;
    
}

int main(){
   
      int n=0;
      cin>>n;
      vector<int> a(n);
      for(int i=0;i<n;i++){
          a[i]=i+1;
      }
      
      int count=0;
      int yes=0;
      for(int j=0;j<n;j++){
          for(int i=2;i<n;i++){
          if(isprime(i)){
              if(a[j]%i==0){
                  count++;
              }
          }
          
      }
      if(count==2){
          yes++;
      }
      count=0;
          
      }
      cout<<yes<<endl;
      
      
    
     

  return 0;
  }
