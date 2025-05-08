

#include<iostream>
using namespace std;

int main() {
    int i = 1, sum = 0;

    while (i <= 50) {
        sum += i;
        ++i;
    }

    cout << "Sum of the first 50 natural numbers: " << sum << endl;

    return 0;
}
