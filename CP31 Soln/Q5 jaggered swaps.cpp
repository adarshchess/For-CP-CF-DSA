#include<bits/stdc++.h>

using namespace std;

int main(){
   int t=0;
  cin>>t;

  while(t>0){
      int n=0;
      cin>>n;
      vector<int> nums(n);
      
      for(int i=0;i<n;i++){
          cin>>nums[i];
          
      }
      
      if(nums[0]==1){ // CRUX of the soln there are always n natural no. in the arr so 
                       // we exploit this fact since we cannot manupulate the i-1th position ever so it always has to be 1 for the arr to be sorted otherwise there is no other way to sort the array if 1 occurs any place else because i would not be able to put it at the fisrt index 
          cout<<"YES"<<endl;
      }
      else {
          cout<<"NO"<<endl;
      }
    
      

    t--;
  }

  
  
  return 0;
  }
