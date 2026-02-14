#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;

public:
    Student() {
        name = "Unknown";
        roll = 0;
        cout << "Default Constructor Called\n";
    }

    void display() {
        cout << name << " " << roll << endl;
    }
};

int main() {
    Student s1;
    s1.display();
}
