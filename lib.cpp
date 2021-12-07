//
// Created by Abram on 07/12/2021.
//

#include "lib.h"

float maggiore(float arr1[], long & dim, float & num){
    arr1[0]=num;
    for (int i=1; i<=dim-1;i++){
        if(num<arr1[i]){
            num=arr1[i];
        }

    }
    return num;
}