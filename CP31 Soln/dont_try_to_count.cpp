#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	cin>>t;
	
	
	while(t>0){
	    int n=0;
	    int m=0;
	    cin>>n;
	    cin>>m;
	    string x;
	    
	    string s;
	    cin>>x;
	    cin>>s;
	    string temp=x;
	    bool flag=true;
	    
	    
	    
	    
	    int count=0;
	    
	    while(x.size()<s.size()+n&&!(x.find(s)!= string::npos)){
	        x+=x;
	         count++;
	    }
	    
	    if(x.find(s)!= string::npos||x==s){
	        cout<<count<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	        flag=false;
	    }
	    
	    
	   
	    
	    t--;
	}
	return 0;

}
