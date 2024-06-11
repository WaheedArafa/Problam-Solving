#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define vl vector<long long>
#define vs vector<string>
int main() {
int t;
cin >> t;
while (t--) {
    int n;
    cin >> n;
    int max = 0, x = 2;
    for (int i = 2; i <= n; ++i) {
        int sum = (n / i) * i * (1 + n / i) / 2;
        if (sum > max) {
            max = sum;
            x = i;
        }
    }
    cout << x << endl;
}
}
