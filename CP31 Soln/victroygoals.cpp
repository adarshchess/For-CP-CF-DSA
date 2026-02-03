#include<bits/stdc++.h>

using namespace std;

int main(){
   int t=0;
  cin>>t;

  while(t>0){
     int n=0;
     cin>>n;
     
     
     vector<int> nums(n);
     
     for(int i=0;i<n-1;i++){
         cin>>nums[i];
     }
     
     int eff=accumulate(nums.begin(),nums.end(),0);
     cout<<eff*-1<<endl; // kyuki total eff ka sum 0 hoga
    t--;
  }

  
  
  return 0;
  }
