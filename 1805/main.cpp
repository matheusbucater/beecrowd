#include <iostream>
 
using namespace std;
 
int main() {
    unsigned long int a_1, a_n, n;
    unsigned long long int soma;
    cin >> a_1;
    cin >> a_n;
    n = 1 + a_n - a_1;
    soma = (a_1 + a_n) * ((float) n/2);
    cout << soma << endl;
    return 0;
}
