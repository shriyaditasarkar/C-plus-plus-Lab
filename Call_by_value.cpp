#include <iostream>
using namespace std;
void swap (int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout<<"After swapping in function: a = "<<x<<", b = "<<y<<endl;
}
int main() {
    int a = 40, b = 50;
    cout<<"Before swapping in main: a = "<<a<<", b = "<<b<<endl;
    swap(a, b);
    return 0;
}