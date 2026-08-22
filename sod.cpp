#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, remainder;
    int sum = 0;

    // Prompt user for input
    cout << "Enter an integer: ";
    cin >> number;

    // Store the original number for display purposes
    originalNumber = number;

    // Loop to extract and sum digits
    while (number > 0) {
        remainder = number % 10; // Extract the last digit
        sum += remainder;        // Add the digit to sum
        number /= 10;            // Remove the last digit
    }

    // Display the final result
    cout << "The sum of the digits of " << originalNumber << " is: " << sum << endl;

    return 0;
}
