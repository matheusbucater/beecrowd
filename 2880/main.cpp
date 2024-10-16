#include <iostream>
 
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string msg, crib, aux;
    int i, j, count;
    cin >> msg;
    cin >> crib;
    aux = crib;
    count = 1 + (msg.length() - crib.length());
    for (i = 0; i < 1 + msg.length() - crib.length(); i++) {
        for (j = 0; j < crib.length(); j++) {
            if (msg[i+j] == aux[j]) {
                count--;
                break;
            }
        }
    }

    cout << count << "\n";

    return 0;
}
