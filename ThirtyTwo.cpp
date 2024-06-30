#include <iostream>
using namespace std;

// Class definition for Car
class Car {
private:
    // Private member variables
    string brand;
    string model;
    int year;
    double price;

public:
    // Constructor to initialize the car with brand, model, year, and price
    Car(string br, string mo, int yr, double pr) {
        brand = br;
        model = mo;
        year = yr;
        price = pr;
    }

    // Member function to display the car details
    void display() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << ", Price: $" << price << endl;
    }

    // Member function to apply discount on the car price
    void applyDiscount(double discountPercentage) {
        price -= (price * discountPercentage / 100);
    }
};

int main() {
    // Creating objects of Car class
    Car car1("Toyota", "Camry", 2020, 24000);
    Car car2("Honda", "Civic", 2019, 22000);

    // Displaying the details of the cars
    cout << "Car 1 details before discount:" << endl;
    car1.display();

    cout << "Car 2 details before discount:" << endl;
    car2.display();

    // Applying discount to the cars
    car1.applyDiscount(10); // 10% discount on car1
    car2.applyDiscount(5);  // 5% discount on car2

    // Displaying the details of the cars after applying discount
    cout << "\nCar 1 details after discount:" << endl;
    car1.display();

    cout << "Car 2 details after discount:" << endl;
    car2.display();

    return 0;
}
