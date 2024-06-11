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
    int max_sum = 0, optimal_x = 2;
    for (int x = 2; x <= n; ++x) {
        int sum = (n / x) * x * (1 + n / x) / 2;
        if (sum > max_sum) {
            max_sum = sum;
            optimal_x = x;
        }
    }
    cout << optimal_x << endl;
}
}