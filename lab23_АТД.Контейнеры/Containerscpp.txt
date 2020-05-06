#include <iostream>
#include "methods.h"
using namespace std;
int& List::operator[](int index){
    assert(index >= 0 && index < size);
    return arr[index];
}
int List::operator()(int arr){
    int sizeOf = 0;
    for(int i = 0; i < size; i++){
        sizeOf++;
    }
    return sizeOf;
}
int* List::operator + (int h){
    for(int i = 0; i < size; i++){
        arr[i] = arr[i]+h;
    }
    return arr;
}
int* List::operator ++ (int n){
    int* arr1 = new int[1];
    for(int i = 0; i < 1; i++){
        arr1[i] = arr[i];
    }
    return arr1;
}

