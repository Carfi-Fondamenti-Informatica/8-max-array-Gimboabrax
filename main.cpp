#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    long dim = 1;
    float val = 0, num = 0;
    float arr1[dim];
    cin >> dim;

    if (dim >= 2) {
        for (int i = 0; i <= dim - 1; i++) {
            cin >> val;
            arr1[i] = val;
        }
    maggiore(arr1, dim, num);
    cout << num << endl;

    } else if(dim==1){
        float a=0;
        cin >> a;
        cout << a << endl;
    }

    return 0;
}
