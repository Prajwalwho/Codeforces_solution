#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> vec(n);

        for(int i=0;i<n;i++){
            cin>>vec[i];
        }

        int maxi=0;
        int cnt = 0;

        for(int i=0;i<n;i++){
            if(vec[i]==0){
                cnt++;
                maxi=max(maxi,cnt);
            } 
            else cnt=0;
        }
        cout<<maxi<<endl; 
    }
    return 0;
}