

#include<iostream>
using namespace std;

int main() {
    int intValue = 42;
    double doubleValue;

    // Convert int to double using static_cast
    doubleValue = static_cast<double>(intValue);
    cout << "Integer value: " << intValue << endl;
    cout << "Converted to double using static_cast: " << doubleValue << endl;

    // Convert double back to int using static_cast
    double anotherDouble = 42.987;
    int convertedInt = static_cast<int>(anotherDouble);
    cout << "Double value: " << anotherDouble << endl;
    cout << "Converted to int using static_cast: " << convertedInt << endl;

    return 0;
}
