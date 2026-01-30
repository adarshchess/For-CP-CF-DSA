#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,count=0,c1=0,c2=0;
        cin >> n;
        vector<int> a;
        map<long long,long long> mpp;
        for (int i = 0; i < n; i++)
        {
            int j;
            cin >> j;
            a.emplace_back(j);
        }
        int k=a[0];
        if (n==2)
        {
            cout << "YES" << endl;
        }
        else if (n==3)
        {
            if (a[0]==a[1] || a[0]==a[2] || a[1]==a[2])
            {
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                mpp[a[i]]++;
            }
            if (mpp.size()==1)
            {
                cout << "YES" << endl;
            }
            else if (mpp.size()==2)
            {
                if (n%2==0 && mpp[k]==n/2)
                {
                    cout << "YES" << endl;
                }
                else if ( (n%2!=0 && mpp[k]==n/2) || (n%2!=0 && mpp[k]==n/2+1))
                {
                    cout << "YES" << endl;
                }
                else cout << "NO" << endl;
            }
            else cout << "NO" << endl;
        }
            
    }
    return 0;
}
