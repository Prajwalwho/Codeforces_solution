#include<iostream>
#include <algorithm>
#include<string>
using namespace std;
int main(){
    string no;
    cin>>no;

    string ans="";

    for(int i=0;i<no.size();i++){
        char ch = no[i];

        int y=ch-'0';
        int newno = 9-y;

        ans +=(min(y,newno)+'0');
    }

    if(ans[0]=='0'){
        ans[0]='9';
    }

    cout<<ans<<endl;
    return 0;
}