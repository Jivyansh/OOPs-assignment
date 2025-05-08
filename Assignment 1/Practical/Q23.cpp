

#include<iostream>
using namespace std;

void modifyValue(int* ptr) {
    *ptr = 99;
}

int main() {
    const int num = 42;

    // Remove constness using const_cast
    int* modifiable = const_cast<int*>(&num);

    cout << "Before modification: " << num << endl;

    // Modifying the value (undefined behavior!)
    modifyValue(modifiable);

    cout << "After modification (undefined behavior): " << num << endl;

    return 0;
}
