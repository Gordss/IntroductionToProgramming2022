#include <iostream>
#define ARR_SIZE 1024

int main() {

    int size1, arr1[ARR_SIZE];
    std::cout << "Array1 size: ";
    std::cin >> size1;

    for(int i = 0; i < size1; i++) {
        std::cin >> arr1[i];
    }

    int size2, arr2[ARR_SIZE];
    std::cout << "Array1 size: ";
    std::cin >> size2;

    for(int i = 0; i < size2; i++) {
        std::cin >> arr2[i];
    }


    int index1 = 0, index2 = 0,
        index3 = 0, arr3[ARR_SIZE * 2];
    while(index1 < size1 && index2 < size2){
        if(arr1[index1] > arr2[index2]){
            arr3[index3++] = arr2[index2++];
        }
        else
        {
            arr3[index3++] = arr1[index1++];
        }
    }

    while(index1 < size1){
        arr3[index3++] = arr1[index1++];
    }

    while(index2 < size2){
        arr3[index3++] = arr2[index2++];
    }

    std::cout << "Combined: ";
    for(int i = 0; i < index3; i++) {
        std::cout << arr3[i] << " ";
    }

    std::cout << '\n';

    return 0;
}