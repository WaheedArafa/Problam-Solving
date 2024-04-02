#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b;
cin >> a >> b;
int window = a;
int curtain = b * 2;
if (window <= curtain)
{
    cout << "0";
}
else
{
    cout << window - curtain;
}
}