#include<bits/stdc++.h>

using namespace std;


int main(){
   int t=0;
  cin>>t;
  

  while(t>0){
     
     int n=0;
     cin>>n; // itni chocolate
     int l=0;
     cin>>l; // min choco price
     int r=0;
     cin>>r;  // max choo price
     int k=0;
     cin>>k;  // uska total paisa
     vector<int> nums(n);
     
     for(int i=0;i<n;i++){
         cin>>nums[i];
         
     }
     
     int buy=0;
     sort(nums.begin(),nums.end());
     
     for(int i=0;i<n;i++){
         if(nums[i]>=l&&nums[i]<=r&&nums[i]<=k){
             buy++;
             k-=nums[i];
         }
         
     }
     
     cout<<buy<<endl;
            


    t--;
  }

  
  
  return 0;
  }
