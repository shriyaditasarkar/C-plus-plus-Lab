#include <iostream>

int main() {
    int num;
    // Using 'unsigned long long' to prevent early integer overflow
    unsigned long long factorial = 1; 

    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;

    // Handle invalid negative input
    if (num < 0) {
        std::cout << "Error: Factorial is not defined for negative numbers." << std:: endl;
    } 
    // Handle edge cases for 0 and 1 explicitly
    else if (num == 0 || num == 1) {
        std::cout << "Factorial of " << num << " is: 1" << std::endl;
    } 
    // Calculate factorial for numbers greater than 1
    else {
        for (int i = 2; i <= num; ++i) {
            factorial *= i;
        }
        std::cout << "Factorial of " << num << " is: " << factorial << std::endl;
    }

    return 0;
}
