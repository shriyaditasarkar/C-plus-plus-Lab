
#include <iostream>
#include <string>
using namespace std;

// Base class
class Media
{
protected:
    string title, publication;

public:
    virtual void read()
    {
        cout << "Enter title: ";
        getline(cin, title);

        cout << "Enter publication: ";
        getline(cin, publication);
    }

    virtual void show()
    {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
    }

    virtual ~Media() {}
};

// Derived class Book
class Book : public Media
{
    int pages;

public:
    void read() override
    {
        Media::read();

        cout << "Enter number of pages: ";
        cin >> pages;
    }

    void show() override
    {
        Media::show();
        cout << "Number of pages: " << pages << endl;
    }
};

// Derived class Tape
class Tape : public Media
{
    float playingTime;

public:
    void read() override
    {
        Media::read();

        cout << "Enter playing time (in minutes): ";
        cin >> playingTime;
    }

    void show() override
    {
        Media::show();
        cout << "Playing time: " << playingTime
             << " minutes" << endl;
    }
};

int main()
{
    Book b;
    Tape t;

    Media *ptr;

    cout << "Enter Book Details:" << endl;
    ptr = &b;
    ptr->read();

    cin.ignore();

    cout << "\nEnter Tape Details:" << endl;
    ptr = &t;
    ptr->read();

    cout << "\nBook Details:" << endl;
    ptr = &b;
    ptr->show();

    cout << "\nTape Details:" << endl;
    ptr = &t;
    ptr->show();

    return 0;
}
