#include <bits/stdc++.h>
using namespace std;
int main() {
int r,g,b;
cin >> r >> g >> b;
int x = g*10 + b;
if (x % 4 == 0)
{
    cout << "YES";
}
else
{
    cout << "NO";
}
}