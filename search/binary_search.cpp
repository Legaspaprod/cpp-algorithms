#include <iostream>

int binarySearch(int arr[], int size, int target) {

    int left = 0;
    int right = size - 1;

    while (left <= right) {

        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {

    int arr[] = {1,3,5,7,9};

    int index = binarySearch(arr, 5, 7);

    std::cout << "Index: " << index << std::endl;

    return 0;
}
