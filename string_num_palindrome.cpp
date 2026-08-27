#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // -------- Number Palindrome --------
    int n, r, sum = 0, temp;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }

    if (temp == sum)
        cout << "Number is Palindrome." << endl;
    else
        cout << "Number is not Palindrome." << endl;


    // -------- String Palindrome --------
    char string1[20];
    int i, length;
    int flag = 0;

    cout << "\nEnter a string: ";
    cin >> string1;

    length = strlen(string1);

    for (i = 0; i < length; i++)
    {
        if (string1[i] != string1[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        cout << string1 << " is not a palindrome." << endl;
    else
        cout << string1 << " is a palindrome." << endl;

    return 0;
}