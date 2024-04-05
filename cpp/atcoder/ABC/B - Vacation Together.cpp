#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int ans = 0, res = 0;
    for (int i = 0; i < d; i++) {
        int curr = 0;
        for (int j = 0; j < n; j++) {
            if (s[j][i] == 'x') {
                curr = 1;
                res = 0;
                break;
            }
        }
        if (curr == 0) {
            res += 1;
        }
        ans = max(ans, res);
    }
    cout << ans << endl;
    return 0;
}