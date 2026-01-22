#include<bits/stdc++.h>

using namespace std;

int main(){
   int t=0;
  cin>>t;

  while(t>0){
      int rows=0;
      int cols=0;
      int strow=0;
      int stcol=0;
      int firow=0;
      int ficol=0;
      cin>>rows;
      cin>>cols;
      cin>>strow;
      cin>>stcol;
      cin>>firow;
      cin>>ficol;
      int time=0;
      int dr=1;
      int dc=1;
      
      
      while(strow!=firow&&stcol!=ficol){
          // upper ya lower bound touch kar liya
          
          if(strow+dr>rows||strow+dr<1)dr=-1*dr;
          if(stcol+dc>cols||stcol+dc<1)dc=-1*dc;
          
          
          //finally jab dr aur dc valid ho gaye ek itertn me ek hi bar move kia
          strow+=dr;
          stcol+=dc;
          time++;
    
      
      
}

  cout<<time<<endl;
    t--;
  }

  
  
  return 0;
  }
