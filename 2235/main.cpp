#include <iostream>
 
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a==b||a==c||b==c||a+b==c||a+c==b||c+b==a) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    return 0;
}
