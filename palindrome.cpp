#include <iostream>

using namespace std;

int main() {
    int num, originalNum, remainder;
    int reversedNum = 0;

    // Prompt user for input
    cout << "Enter an integer: ";
    cin >> num;

    // Store the original number for final comparison
    originalNum = num;

    // Reverse the digits of the number
    while (num > 0) {
        remainder = num % 10;
        reversedNum = (reversedNum * 10) + remainder;
        num /= 10;
    }

    // Determine if the number is a palindrome
    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }

    return 0;
}