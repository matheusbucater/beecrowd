#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int c,i;
    cin >> c;
    for (i=0;i<c;i++){
        int n1, n2, n3,r,d,j;
        char op,eq;
        cin >> n1 >> op >> n2 >> eq >> n3;
        switch (op) {
            case '+':
                r=n1+n2;
                break;
            case '-':
                r=n1-n2;
                break;
            case 'x':
                r=n1*n2;
                break;
        }
        d = abs(r-n3);
        if (d == 0) break;
        cout << "E";
        for (j=0;j<d;j++){
            cout << "r";
        }
        cout << "ou!" << "\n";
    }
    
    return 0;
}
