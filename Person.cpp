#include <iostream>

using namespace std;

class Person
{
    char name[64];
    int age;
    char address[64];

    float basicSalary;
    float hra;
    float da;
    float grossSalary;

public:

    // Constructor
    Person()
    {
        cout << "\nEnter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter address: ";
        cin >> address;

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        // Salary components
        hra = basicSalary * 0.20;
        da = basicSalary * 0.10;

        grossSalary = basicSalary + hra + da;
    }

    // Function to return age
    int getAge()
    {
        return age;
    }

    // Display salary slip
    void display()
    {
        cout << "\n\n========== SALARY SLIP ==========";
        cout << "\nName          : " << name;
        cout << "\nAge           : " << age;
        cout << "\nAddress       : " << address;
        cout << "\nBasic Salary  : " << basicSalary;
        cout << "\nHRA (20%)     : " << hra;
        cout << "\nDA (10%)      : " << da;
        cout << "\nGross Salary  : " << grossSalary;
        cout << "\n=================================";
    }
};


// Inline function to find youngest and eldest
inline void findYoungestEldest(Person p[], int n)
{
    int youngest = p[0].getAge();
    int eldest = p[0].getAge();

    for(int i = 1; i < n; i++)
    {
        if(p[i].getAge() < youngest)
        {
            youngest = p[i].getAge();
        }

        if(p[i].getAge() > eldest)
        {
            eldest = p[i].getAge();
        }
    }

    cout << "\n\nYoungest Age = " << youngest;
    cout << "\nEldest Age   = " << eldest;
}


int main()
{
    Person p[10];

    cout << "\n\n===== SALARY SLIPS =====";

    for(int i = 0; i < 10; i++)
    {
        cout << "\n\nPerson " << i + 1;
        p[i].display();
    }

    findYoungestEldest(p, 10);

    return 0;
}