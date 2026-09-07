#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int x1,y1;
        cin>>x1>>y1;
        
        int x2,y2;
        cin>>x2>>y2;

        int x3,y3;
        cin>>x3>>y3;

        int x4,y4;
        cin>>x4>>y4;

        int d = min(sqrt(pow(x2-x1,2)+pow(y2-y1,2)),sqrt(pow(x3-x1,2)+pow(y3-y1,2)));

        
        cout<<d*d<<endl;
        
    }
    return 0;   
}