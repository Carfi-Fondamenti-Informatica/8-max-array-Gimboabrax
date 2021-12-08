//
// Created by Abram on 07/12/2021.
//

#include "lib.h"

float maggiore(float arr1[], int & dim, float & num, float & val){
    if(dim>=2){
        num=arr1[0];
        for (int i=1; i<=dim-1;i++) {
            if (num < arr1[i]) {
                      num = arr1[i];
            }
        } //se secondo numero negativo con dim==2 num==0
        return num;
    } else if(dim==1){
        return arr1[0];
    } else{
        return 0;
    }
}