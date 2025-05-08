

#include<iostream>
using namespace std;

int main() {
    int num = 65;

    // Use reinterpret_cast to treat int pointer as char pointer
    char* chPtr = reinterpret_cast<char*>(&num);

    cout << "Integer value: " << num << endl;
    cout << "Reinterpreted as character: " << *chPtr << endl;

    return 0;
}

