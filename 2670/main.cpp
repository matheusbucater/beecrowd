#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int i,a1,a2,a3,p1,p2,p3,am;
    cin >> a1 >> a2 >> a3;
    p1 = 2 * a2 + 4 * a3;
    p2 = 2 * a1 + 2 * a3;
    p3 = 4 * a1 + 2 * a2;
    cout << min({p1,p2,p3}) << "\n";
    return 0;
}
