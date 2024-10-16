#include <iostream>
 
using namespace std;
 
int main() {
    int cn[4];
    cin >> cn[0];
    cin >> cn[1];
    cin >> cn[2];
    cin >> cn[3];
    for (int i = 0; i < 4; i++) {
        if (cn[i] == 1) {
            printf("%d\n", i+1);
            break;
        }
    }
    return 0;
}
