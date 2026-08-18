#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int cntA=0;
        int cntB=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A') cntA ++;
            if(s[i]=='B') cntB++;
        }
        if(cntA>cntB) cout<<'A'<<endl;
        else cout<<'B'<<endl;
    }
}