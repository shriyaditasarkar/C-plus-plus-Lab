#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, originalNum, remainder, digits = 0, sum = 0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // Step 1: Find the total number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    // Step 2: Compute the sum of digits raised to the power of total digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, digits);
        originalNum /= 10;
    }

    // Step 3: Verify and display the result
    if (sum == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
