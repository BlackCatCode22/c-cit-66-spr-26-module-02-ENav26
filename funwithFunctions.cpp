#include <iostream>
#include <string>

int getAnIntFromTheUser(std::string prompt);
void compareTwoInts(int a, int b);
int sumTwoInts(int a, int b);

int main() {

    int num1 = getAnIntFromTheUser("Enter the first integer: ");
    int num2 = getAnIntFromTheUser("Enter the second integer: ");

    std::cout << "-----------------------------------" << std::endl;


    compareTwoInts(num1, num2);


    int sum = sumTwoInts(num1, num2);
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}



int getAnIntFromTheUser(std::string prompt) {
    int value;
    std::cout << prompt;
    std::cin >> value;
    return value;
}


void compareTwoInts(int a, int b) {
    if (a > b) {
        std::cout << a << " is greater than " << b << std::endl;
    } else if (b > a) {
        std::cout << b << " is greater than " << a << std::endl;
    } else {
        std::cout << "Both numbers are equal." << std::endl;
    }
}


int sumTwoInts(int a, int b) {
    return a + b;
}
