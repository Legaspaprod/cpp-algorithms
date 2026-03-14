#include <iostream>

int main() {

    int arr[] = {4,7,1,9,3};
    int target = 9;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            std::cout << "Found at index: " << i << std::endl;
        }
    }

    return 0;
}
