#include <iostream>
#include <string>
#include "Pet.h"

using namespace std;

int main() {
    Pet pet;
    string name;
    string type;
    int age;

    cout << "Enter a pet name: ";
    getline(cin, name);
    pet.setName(name);
    cout << "Enter a pet type: ";
    getline(cin, type);
    pet.setType(type);
    cout << "Enter a pet age: ";
    cin >> age;
    pet.setAge(age);

    cout <<"The pet name is " << pet.getName() << endl;
    cout <<"The pet type is " << pet.getType() << endl;
    cout <<"The pet age is " << pet.getAge() << endl;

    return 0;
}
