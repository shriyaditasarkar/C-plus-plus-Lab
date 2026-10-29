#include <iostream>
#include <string>
using namespace std;

// Base class
class Student
{
protected:
    int rollNo;
    string name;

public:
    void getStudentData()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
    }

    void displayStudentData()
    {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
    }
};

// Derived class from Student
class Exam : public Student
{
protected:
    float marks[6];

public:
    void getMarks()
    {
        cout << "\n\nEnter marks in 6 subjects:\n";

        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks()
    {
        cout << "\n\nMarks:\n";

        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

// Derived class from Exam
class Result : public Exam
{
private:
    float totalMarks;
    float percentage;

public:
    void calculateResult()
    {
        totalMarks = 0;

        for (int i = 0; i < 6; i++)
        {
            totalMarks += marks[i];
        }

        percentage = totalMarks / 6;
    }

    void displayResult()
    {
        displayStudentData();
        displayMarks();

        cout << "\nTotal Marks: " << totalMarks << " / 600";
        cout << "\nPercentage: " << percentage << "%";
    }
};

int main()
{
    Result r;

    cout << "===== STUDENT RESULT =====\n";

    r.getStudentData();
    r.getMarks();
    r.calculateResult();

    cout << "\n\n===== RESULT =====";
    r.displayResult();

    return 0;
}