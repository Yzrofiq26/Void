#include <iostream>
using namespace std ;
void checkAge(int age) {
    if(age >= 18) {
    cout << "You are an adult." << std::endl;
    } else {
    cout << "You are not yet an adult." << std::endl;
    }
}

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    checkAge(age);
    return 0;
}

