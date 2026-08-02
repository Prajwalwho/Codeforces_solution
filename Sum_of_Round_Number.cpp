#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<int> v;
        int d=1;
        
        while(n>0){
            int l=n%10;
            if(l!=0) {
                v.push_back(l*d);
            }
                d = d*10;
                n = n/10;
        }

        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}