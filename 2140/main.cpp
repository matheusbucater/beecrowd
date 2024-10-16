#include <bits/stdc++.h>

using namespace std;

int main() {

    array<int,6> notas = {2, 5, 10, 20, 50, 100};

    while(true) {
        unsigned int m,n,t;
        bool f = false;
        cin >> n >> m;
        if (m == 0 and n == 0) {
            break;
        }
        t = m - n;
        for (array<int,6>::iterator it = notas.begin(); it != notas.end(); ++it) {
            unsigned int p = t - *it;
            if (find(notas.begin(), notas.end(), p) != notas.end()) {
                f = true;
                break;
            }
        }
        if (f) cout << "possible" << "\n";
        else cout << "impossible" << "\n";
    }
    
    return 0;
}
