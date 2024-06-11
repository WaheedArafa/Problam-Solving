#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define vl vector<long long>
#define vs vector<string>
int main() {
ll t; 
cin >> t;
while (t--) {
    ll a[3]; cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);;
    cout << a[1] << endl;
}
}