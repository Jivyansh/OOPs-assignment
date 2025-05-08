#include <iostream>
#include <iomanip>  // for std::setw and std::setprecision
using namespace std;

int main() {
    string name;
    int age;
    double salary;

    // Taking user input
    cout << "Enter your name: ";
    getline(cin, name);  // allows full name input with spaces

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your salary: ";
    cin >> salary;

    // Displaying formatted output
    cout << "\n--- User Information ---" << endl;
    cout << left << setw(10) << "Name:" << name << endl;
    cout << left << setw(10) << "Age:" << age << endl;
    cout << left << setw(10) << "Salary: ₹" << fixed << setprecision(2) << salary << endl;

    return 0;
}
