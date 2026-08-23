#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        
        char i ='i';

        s.erase(s.size()-2);

        s += i;

        cout<<s<<endl;

    }
    return 0;
}