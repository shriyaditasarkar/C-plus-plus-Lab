#include <iostream>
using namespace std;

class Class2;  // Forward declaration

class Class1
{
    int a;

public:
    void input()
    {
        cout << "Enter first number: ";
        cin >> a;
    }

    void display()
    {
        cout << "First number = " << a << endl;
    }

    friend void swap(Class1 &, Class2 &);
};

class Class2
{
    int b;

public:
    void input()
    {
        cout << "Enter second number: ";
        cin >> b;
    }

    void display()
    {
        cout << "Second number = " << b << endl;
    }

    friend void swap(Class1 &, Class2 &);
};

// Friend function definition
void swap(Class1 &x, Class2 &y)
{
    int temp;

    temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main()
{
    Class1 obj1;
    Class2 obj2;

    obj1.input();
    obj2.input();

    cout << "\nBefore swapping:" << endl;
    obj1.display();
    obj2.display();

    swap(obj1, obj2);

    cout << "\nAfter swapping:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}