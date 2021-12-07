#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    long dim = 1;
    float val = 0, num = 0;
    cin >> dim;
    float arr1[dim];
    for (int i = 0; i <= dim - 1; i++) {
        cin >> val;
        arr1[i] = val;
    }
    maggiore(arr1, dim, num);
    cout << num << endl;

    return 0;
}
