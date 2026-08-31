#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>v;

        for(int i=2;i<=n-1;i++){
            v.push_back(i);
        }
        v.push_back(n);
        v.push_back(1);

        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}