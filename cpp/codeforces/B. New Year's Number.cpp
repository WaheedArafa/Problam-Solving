#include <bits/stdc++.h>
using namespace std;
int main(){
int t,x; cin >> t;
while(t--)
{
    cin >> x;
    if (x % 4040 == 0 || x % 4041 == 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
}