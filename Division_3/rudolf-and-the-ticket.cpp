#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        vector<int> vl(n);
        vector<int> vr(m);
        for(int i=0;i<n;i++){
            cin>>vl[i];
        }

        for(int i=0;i<m;i++){
            cin>>vr[i];
        }

        int cnt = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vl[i]+vr[j]<=k) cnt++;
            }
        }

        cout<<cnt<<endl;


    }
}