#include <iostream>
#include <string>
using namespace std;

// 1. Define the Class (The Blueprint)
class Student {
public: // Access Modifier: Makes members accessible from main()
    string name;
    int rollNumber;
    float cgpa;

    // A Member Function (Behavior)
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNumber << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    // 2. Create Objects (Instances of the Blueprint)
    Student s1; 
    Student s2;

    // 3. Assign values using the Dot (.) Operator
    s1.name = "Fahad";
    s1.rollNumber = 101;
    s1.cgpa = 3.51;

    s2.name = "Ali";
    s2.rollNumber = 102;
    s2.cgpa = 3.20;

    // 4. Call behaviors
    cout << "Displaying Student 1 Information:" << endl;
    s1.displayDetails();

    cout << "Displaying Student 2 Information:" << endl;
    s2.displayDetails();

    return 0;
}
