#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int>v(n);

        int tt = 0;
        for(int i = 0;i<n;i++){
            cin>>v[i];
            if(v[i]==2) tt++;
        }
        
        if(tt%2!=0){
            cout<<-1<<endl;
            continue;
    }

        int mid = tt/2;
        int cnt =0;

        for(int i=0;i<n;i++){
            if(v[i]==2) cnt ++;

            if(cnt==mid){
                cout<<i+1<<endl;
                break;
            }
        }

    }
    return 0;
}