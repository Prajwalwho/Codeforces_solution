#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;

    while ((t--) > 0){

        string s;
        cin >> s;

        int sum1 = 0;
        int sum2 = 0;

        for (int i = 0; i < 3; i++){
            sum1 += s[i]-'0';
        }
        for (int i = 3; i < s.length(); i++){
            sum2 += s[i]-'0';
        }
        
        if (sum1 == sum2)
        cout << "YES"<<"\n";
        else
        cout << "NO"<<"\n";
    }
    return 0;
}