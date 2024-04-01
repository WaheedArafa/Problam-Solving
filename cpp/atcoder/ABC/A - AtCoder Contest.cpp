#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << "A" << s[0] << "C";
}