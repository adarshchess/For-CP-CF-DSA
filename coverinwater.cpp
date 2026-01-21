#include<bits/stdc++.h>

using namespace std;

int main(){
   int t=0;
  cin>>t;

  while(t>0){
      int n=0;
      int cons=0;
      int opr=0;
      cin>>n;
      vector<char> a(n);
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      
      for(int i=0;i<n;i++){
          if(cons>=3){
              break;
          }
          if(a[i]=='#'){
              cons=0;
              continue;
              
          }
          else if(a[i]=='.'){
              opr++;
              cons++;
          }
      }
      
      if(cons>=3){
          cout<<2<<endl;
      }
      else{
          cout<<opr<<endl;;
      }
      
          
          
          


    t--;
  }

  
  
  return 0;
  }
