#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b;
cin >> a >> b;
int mult = a * b;
int error = -1;
if (a <= 9 && b <= 9)
{
    cout << mult;
}
else
{
    cout << error;
}
}