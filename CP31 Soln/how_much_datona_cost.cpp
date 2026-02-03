#include<bits/stdc++.h>

using namespace std;

int main(){
   int t=0;
  cin>>t;

  while(t>0){
     int n=0;
     cin>>n;
     int k=0;
     cin>>k;
     unordered_map<int,int> mpp;
     
     int a=0;
     for(int i=0;i<n;i++){
         cin>>a;
         mpp[a]++;
     }
     
    if(mpp.find(k)!=mpp.end()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    t--;
  }

  
  
  return 0;
  }
