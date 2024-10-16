#include <iostream>
 
using namespace std;
 
int main() {
    int n,i,c=0;
    cin >> n;
    char p=0,v[n];
    for (i=0;i<n;i++){
        cin >> v[i];
    }
    for (i=0;i<n;i++){
        char vi=v[i];
        if (vi != p) {
            p=vi;
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
