#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int &x : v)cin>>x;

        int split , j;

        if(n%2==0){ 
            split = n/2;
            reverse(v.begin()+split,v.end());
            j = split;
        }
        else{
            split = n/2+1;
            reverse(v.begin()+split,v.end());
            j= split;
        }

         for(int i=0;i<split;i++){
            cout<<v[i]<<" ";
            if(j<n) {
                cout<<v[j]<<" ";
                j++;
            }
        }
        cout<<endl;
    }
    return 0;
}