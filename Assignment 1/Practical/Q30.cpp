#include<iostream>
using namespace std;

int main() {
    int num, reversed = 0;

    cout << "Enter a number to reverse: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;  // Extract the last digit
        reversed = reversed * 10 + digit;  // Build the reversed number
        num /= 10;  // Remove the last digit
    }

    cout << "Reversed number: " << reversed << endl;

    return 0;
}
