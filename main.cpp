#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    int dim=1;
    float arr1[dim], val=0, num=0;
    cin >> dim;
    for(int i=0; i<=dim-1; i++){
        cin >> val;
        arr1[i]=val;
    }

    maggiore(arr1, dim, num);
    cout << num << endl;

    return 0;
}
