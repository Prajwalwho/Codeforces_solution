#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        for(int &i:a){
            cin>>i;
        }

        sort(a.begin(),a.end());

        bool same = false;

        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                same = true;
                break;
            }
        }

        if(same){
            cout<<-1<<endl;
        }
        else{
             sort(a.begin(),a.end(),greater<int>());

            for(int i:a){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}