#include <iostream>
 
using namespace std;
 
int main() {
 
    int f,i,n;
    cin >> n;
    f=n;
    for (i=n-1;i>0;i--) {
        f*=i;
    }
    cout << f << endl;
    return 0;
}
