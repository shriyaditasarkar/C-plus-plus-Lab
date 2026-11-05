#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imag;

    // Unary ++ operator
    void operator++()
    {
        real++;
        imag++;
    }

    // Unary -- operator
    void operator--()
    {
        real--;
        imag--;
    }

    // Parameterized constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Binary + operator
    Complex operator+(Complex obj)
    {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Binary - operator
    Complex operator-(Complex obj)
    {
        return Complex(real - obj.real, imag - obj.imag);
    }
    void input(){
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display(){
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2;

    c1.input();
    c2.input();

    // Display the entered complex numbers
    cout << "\nFirst complex number = ";
    c1.display();

    cout << "Second complex number = ";
    c2.display();

    Complex c3 = c1 + c2;

    cout << "\nBinary addition of two complex numbers = ";
    c3.display();

    c3 = c1 - c2;

    cout << "Binary subtraction of two complex numbers = ";
    c3.display();

    ++c1;

    cout << "After incrementing c1 = ";
    c1.display();

    ++c2;
    cout << "After incrementing c2 = ";
    c2.display();

     --c1;

    cout << "After decrementing c1 = ";
    c1.display();

    --c2;

    cout << "After decrementing c2 = ";
    c2.display();

    return 0;
}