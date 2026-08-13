#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s = to_string(n);
        int d = s.size();
        int f= s[0] -'0';
        cout<<9*(d-1)+f<<endl;
    }

    return 0;
}