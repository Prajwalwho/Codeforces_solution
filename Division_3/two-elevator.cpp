#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int k;
        if(b>c) k=b;
        else k=2*c-b;

        if(k>a) cout<<1<<endl;
        else if(a>k) cout<<2<<endl;
        else  cout<<3<<endl;



        
    }
    return 0;
}