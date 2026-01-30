#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x,n,max;
        cin >> n >> x;
        int gas[n],dis[n+1];
        for (int i = 0; i < n; i++)
        {
            cin >> gas[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i==0)
            {
                dis[i]=gas[i]-0;
            }           
            else dis[i]=gas[i]-gas[i-1];
        }
        if(n==0){
            cout << x << endl;
        }
        else{
            dis[n]=2*(x-gas[n-1]);
            max =dis[0];
            for (int i = 0; i < n+1; i++)
            {
                if (max<dis[i])
                {
                    max=dis[i];
                }
            }
            cout << max << endl;
        }    
    }
    return 0;
}