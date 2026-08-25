#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        string a;
        string b;
        cin>>a;
        cin>>b;

        string sum ;
        sum= b[0]+a.substr(1) + " " + a[0] + b.substr(1);

        cout<<sum<<endl;
    }
}