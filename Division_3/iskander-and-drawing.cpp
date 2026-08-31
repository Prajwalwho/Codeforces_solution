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

        int cnt=0;
        int real=0;

        for(int i=0;i<n;i++){
            if(s[i]=='#') {
                cnt++;
                real=max(real,cnt);
            }
            else cnt=0;
        }
        cout<<(real+1)/2<<endl;
    }
    return 0;
}