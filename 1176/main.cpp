#include <bits/stdc++.h>

using namespace std;


uint64_t fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    uint64_t prev = 0;
    uint64_t curr = 1;
    for (int i = 1; i < n; i++) {
        uint64_t aux = curr;
        curr += prev;
        prev = aux;
    }
    return curr;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        uint64_t n;
        cin >> n;
        uint64_t f = fib(n);
        cout << "Fib(" << n << ") =" << " " << f << "\n";
    }
    
    return 0;
}
