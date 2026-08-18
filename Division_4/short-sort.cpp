#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int diff = 0;

        if (s[0] != 'a') diff++;
        if (s[1] != 'b') diff++;
        if (s[2] != 'c') diff++;

        if (diff <= 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}