#include <iostream>

int main() {

    int a = 0, b = 1;

    for(int i = 0; i < 10; i++) {

        std::cout << a << " ";

        int next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
