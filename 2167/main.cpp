#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m=0;
    bool f = false;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int ri;
        cin >> ri;
        if (ri < m) {
            cout << i+1 << "\n";
            f = true;
            break;
        } else {
            m = ri;
        }
    }

    if (!f) cout << 0 << "\n";
    
    return 0;
}
