#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,s;
        cin>>n>>s;

        vector<int> x(n);
        for(int i=0;i<n;i++){
            cin>>x[i];    
        }

        int low = x[0];
        int high = x[n-1];

        int ans = (high-low)+ min(abs(s-low),abs(s-high));
        
        cout<<ans<<endl;
    }
    return 0;
}