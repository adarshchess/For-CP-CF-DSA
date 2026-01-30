#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,count=0,cnt=0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='.')
            {
                cnt++;
                count++;
                if (count==3)
                {
                    break;
                }
                
            }
            else count=0;
        }
        if(count==3){
            cout << 2 << endl;
        }
        else cout << cnt << endl;
    }
    return 0;
}
