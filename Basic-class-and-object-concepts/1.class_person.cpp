
// creating a class person with name & age and display their values


#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p1;
    p1.name = "Ali";
    p1.age = 20;
    p1.display();
}
