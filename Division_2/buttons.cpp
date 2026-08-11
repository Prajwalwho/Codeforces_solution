#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        bool flag=1;

        for(int i=1;i<=c;i++){
            if(i%2==0) flag=0;
        }

        if(flag && a==b) cout<<"Second"<<endl;
        if(flag && a>b) cout<<"first"<<endl;
        if(flag && a<b) cout<<"Second"<<endl;
        // else cout<<"first"<<endl;
    }
    return 0;
}

//true /1 for first
//false /1 for second