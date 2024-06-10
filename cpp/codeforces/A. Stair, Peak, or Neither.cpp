#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int a,b,c;
for (int i = 0; i < n; i++)
{
    cin >> a >> b >> c;
    if (a < b && b < c)
    {
        cout << "STAIR\n";
    }
    else if (a < b && b > c)
    {
        cout << "PEAK\n";
    }
    else
    {
        cout << "NONE\n";
    }
}
}