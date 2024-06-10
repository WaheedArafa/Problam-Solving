#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,c;
cin >> a >> b >> c;
int a_b,b_c,a_c;
a_b = a + b;
b_c = b + c;
a_c = a + c;
if (a_b <= b_c && a_b <= a_c)
{
    cout << a_b;
}
else if (b_c <= a_b && b_c <= a_c)
{
    cout << b_c;
}
else if (a_c <= a_b && a_c <= b_c)
{
    cout << a_c;
}
}