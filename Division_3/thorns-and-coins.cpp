#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int cnt = 0;

        for(int i=0;i<n;i++){
            if(s[i]=='@') cnt++;
            if(s[i] == '*' && i+1<n && s[i+1] == '*') break;
        }
        cout<<cnt<<endl;
    }

    return 0;
}