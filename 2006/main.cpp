#include <iostream>
 
using namespace std;

int main() {
    int i,c=0;
    unsigned char t,n[5];
    cin >> t;
    cin >> n[0];
    cin >> n[1];
    cin >> n[2];
    cin >> n[3];
    cin >> n[4];
    for (i=0;i<5;i++){
        if (n[i] == t){
            c++;
        }
    }

    cout << c << endl;
    return 0;
}
