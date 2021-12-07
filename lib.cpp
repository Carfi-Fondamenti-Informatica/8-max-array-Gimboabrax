//
// Created by Abram on 07/12/2021.
//

#include "lib.h"

float maggiore(float arr1[], int & dim, float & num){
    if(dim>=2){
        arr1[0]=num;
        for (int i=1; i<=dim-1;i++) {
            if (num < arr1[i]) {
                      num = arr1[i];
            }
        }
        return num;
    } else if(dim==1){
        return arr1[0];
    } else{
        return 0;
    }


}