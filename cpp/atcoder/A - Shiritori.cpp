#include <bits/stdc++.h>
using namespace std;
int main() {
    string a,b,c;
    cin >> a >> b >> c;

    bool x;

    sort(a.begin(),a.end());

    if (a[0] == b[0])
    {
        x = 1;
    }

    sort(b.begin(),b.end());

    if (x = 1 && b[0] == c[0])
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
}