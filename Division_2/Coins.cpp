#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int p;

        if(((n-(k*p)) + (k*p)) == n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}