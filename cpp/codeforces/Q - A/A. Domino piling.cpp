#include <bits/stdc++.h>
using namespace std ;
int main(){
int m; cin >> m;
int n; cin >> n;
int mxn = m * n;
if (mxn&1)
{
    mxn--;
    cout << mxn / 2;
}
else
{
    cout << mxn / 2;
}
}