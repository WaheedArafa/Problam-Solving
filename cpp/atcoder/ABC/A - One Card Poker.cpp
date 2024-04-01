#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b;
cin >> a >> b;
if (a > b && b != 1 || a == 1 && b != a)
{
    cout << "Alice";
}
else if (a < b && a != 1 || b == 1 && a != b)
{
    cout << "Bob";
}
else
{
    cout << "Draw";
}
}