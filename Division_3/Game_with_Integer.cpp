#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n%3==1) cout<<"First"<<endl; //vanya do (-1)
        if(n%3==2) cout<<"First"<<endl; //vanya do (+1)
        if(n%3==0) cout<<"Second"<<endl; //vaniya can't win in single move and on next time voda wins
    }
    return 0;
}