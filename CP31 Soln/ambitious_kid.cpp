#include<bits/stdc++.h>

using namespace std;

int main(){
   
      int n=0;
      cin>>n;
      vector<int> a(n);
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      int mn=*min_element(a.begin(),a.end(),[](int a, int b){ // yaha pe ek comparitor ka use kiya hai normal min element assign nhi kar skte uski absolute value check karni hai fir dekhna hai kon min hai
          return abs(a)<abs(b);
      });
      if(mn<0){
          cout<<-1*mn<<endl;
      }
      else{
           cout<<mn<<endl;
      }
     

  return 0;
  }
