#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        string a;
        cin>>a;
        string b;
        cin>>b;
        string c;
        cin>>c;
        
        string news ;
        news += a[0];
        news += b[0];
        news += c[0];

        cout<<news<<endl;
    }
    return 0;
}