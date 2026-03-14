#include <iostream>
#include <string>

int main() {

    std::string word = "level";
    std::string reversed = word;

    std::reverse(reversed.begin(), reversed.end());

    if(word == reversed)
        std::cout << "Palindrome\n";
    else
        std::cout << "Not palindrome\n";

    return 0;
}
