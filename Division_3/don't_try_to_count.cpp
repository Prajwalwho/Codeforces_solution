#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string x;
        cin >> x;
        string s;
        cin >> s;
 

        while (x.find(s) != string::npos)
            x = x + x;
    }



    return 0;
}