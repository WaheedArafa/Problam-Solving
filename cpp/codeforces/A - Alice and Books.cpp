#include <bits/stdc++.h>
using namespace std;
int main() {
int t; 
cin >> t;
while (t--) {
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m = 0;
    for (int i = 0; i < n-1; i++)
    {
        m = max(m,a[i]);
    }
    cout << m + a[n-1] << endl;
}
}