

#include<iostream>
using namespace std;

// Base class (must be polymorphic for dynamic_cast to work)
class Animal {
public:
    virtual void speak() {
        cout << "Animal speaking..." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof! Woof!" << endl;
    }

    void fetch() {
        cout << "Dog is fetching the ball!" << endl;
    }
};

int main() {
    Animal* animal = new Dog();  // Upcasting (safe)
    
    // Downcasting using dynamic_cast
    Dog* dog = dynamic_cast<Dog*>(animal);

    if (dog != nullptr) {
        cout << "Downcasting successful!" << endl;
        dog->speak();  // Polymorphic behavior
        dog->fetch();  // Dog-specific behavior
    } else {
        cout << "Downcasting failed!" << endl;
    }

    delete animal;
    return 0;
}