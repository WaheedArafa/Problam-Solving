#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, l;
    cin >> n >> l;

    vector<string> strings(n);
    for (int i = 0; i < n; i++) {
        cin >> strings[i];
    }

    sort(strings.begin(), strings.end());

    for (int i = 0; i < n; i++) {
        cout << strings[i];
    }
    
    return 0;
}