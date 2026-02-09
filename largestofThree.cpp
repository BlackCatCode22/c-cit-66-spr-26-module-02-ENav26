#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, largest;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2) {
        if (num1 >= num3) {
            largest = num1;
        } else {
            largest = num3;
        }
    } else {
        if (num2 >= num3) {
            largest = num2;
        } else {
            largest = num3;
        }
    }
    cout << "The largest integer is: " << largest << endl;

    return 0;
}

