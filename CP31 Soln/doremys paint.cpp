#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	cin>>t;
	
	
	while(t>0){
	    int n=0;
	    cin>>n;
	    
	    int a=0;
	   unordered_map<int,int> mpp;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        mpp[a]++;
	    }
	    
	    auto it=mpp.begin();
	    if(mpp.size()==1){
	        cout<<"YES"<<endl;
	    }
	    
	    
	    else if(mpp.size()==2){
	         int f1=it->second;
	    it++;
	    int f2=it->second;
	          if(abs(f1-f2)<2){
	              cout<<"YES"<<endl;
	          }
	          else{
	              cout<<"NO"<<endl;
	          }
	          
	    }
	   
	    else{
	        cout<<"NO"<<endl;
	    }
	   
	    
	    t--;
	}
	return 0;

}
