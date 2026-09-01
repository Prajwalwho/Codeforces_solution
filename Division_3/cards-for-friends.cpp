#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int w,h,n;
        cin>>w>>h>>n;

        int cnt =1;
        int area = w*h; // 4

        while(area>0){
            if(w%2==0){ 
                area = (w/2)*h ;
                w=w/2;
                cnt *=2 ;
            }
            else if(h%2==0){
                area = (h/2)*w;
                h=h/2; 
                cnt *=2 ;
            }
            else break;
        }
        
        if(cnt >= n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}