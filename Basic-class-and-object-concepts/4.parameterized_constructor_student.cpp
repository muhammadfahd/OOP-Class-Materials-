#include<iostream>
using namespace std;
class Student {
private:
    string name;
    int roll;
public:
    Student(string n, int r) {
        name = n;
        roll = r;
    }
    void display() {
        cout << name << " " << roll << endl;
    }
};
int main() {
    Student s1("Ahmed", 102);
    s1.display();
}
