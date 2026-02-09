#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);


    int start = 0;
    int end = input.length() - 1;

    while (start < end) {

        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;


        start++;
        end--;
    }

    std::cout << "Reversed string: " << input << std::endl;
    return 0;
}
