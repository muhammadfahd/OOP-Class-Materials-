#include <iostream>
using namespace std;
class Car {
private:
    string brand;
    string model;
    double price;
public:
    // Parameterized Constructor: The "Gaurdian" of data
    Car(string b, string m, double p) {
        brand = b;
        model = m;
        price = p;
    }
    void display() {
        cout << brand << " " << model << " - $" << price << endl;
    }
};
int main() {
    // Elegant, safe, and fast!
    Car c1("Toyota", "Corolla", 25000);
    Car c2("Honda", "Civic", 28000);
    Car c3("Tesla", "Model 3", 45000);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
