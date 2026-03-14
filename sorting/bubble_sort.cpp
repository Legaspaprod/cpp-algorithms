#include <iostream>

int main() {

    int arr[] = {5,2,9,1,3};
    int size = 5;

    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-i-1; j++) {

            if(arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int n : arr)
        std::cout << n << " ";

    return 0;
}
