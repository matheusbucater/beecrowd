#include <cmath>
#include <iostream>
 
using namespace std;
 
int main() {
    int v,n,i,c,r;
    double fv,fn,d,p;
    c=10;
    cin >> v;
    cin >> n;
    fv=(double)v;
    fn=(double)n;
    d = (fv*fn*90)/100;
    for (i=0;i<9;i++) {
        p = d*c/90;
        r = ceil(p); 
        if (i == 8) {
            cout << r << endl;
        } else {
            cout << r << " ";
        }
        c+=10;
    }
    return 0;
}
