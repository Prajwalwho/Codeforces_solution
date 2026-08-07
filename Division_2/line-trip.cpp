#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int>gas(n);

        for(int i=0;i<n;i++){
            cin>>gas[i];
        }

        int maxi=0;

        int first = gas[0]-0;

        for(int i=1;i<n;i++){
            maxi=max(gas[i]-gas[i-1],maxi);
        }

        int last = 2*(x-gas[n-1]);

        cout<<max({last,first,maxi})<<endl;

    }
    return 0;
}