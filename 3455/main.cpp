#include <iostream>
 
using namespace std;

int main() {

    unsigned long long int a,b,c;
    double fa,fb,fc,ab,ac,ba,bc,ca,cb;
    char t;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> t;

    fa=(double)a;
    fb=(double)b;
    fc=(double)c;

    switch (t) {
        case 'A':
            ab=(fb*3/2);
            ac=(fc*5/2);
            cout << (unsigned long long int)(fa+ab+ac) << endl;
            break;
        case 'B':
            ba=(fa*2/3);
            bc=(fc*5/3);
            cout << (unsigned long long int)(fb+ba+bc) << endl;
            break;
        case 'C':
            ca=(fa*2/5);
            cb=(fb*3/5);
            cout << (unsigned long long int)(fc+ca+cb) << endl;
            break;
    }

    return 0;
}
