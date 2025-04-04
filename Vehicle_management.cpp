#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    string make, model;
    int year;

public:
    Vehicle(string mk, string mdl, int yr) : make(mk), model(mdl), year(yr) {}

    virtual void showDetails() {
        cout << year << " " << make << " " << model;
    }
};

// Derived class: Car
class Car : public Vehicle {
    int num_doors;

public:
    Car(string mk, string mdl, int yr, int doors) : Vehicle(mk, mdl, yr), num_doors(doors) {}

    void showDetails() override {
        Vehicle::showDetails();
        cout << " with " << num_doors << " doors" << endl;
    }
};

// Derived class: Truck
class Truck : public Vehicle {
    int cargo_capacity;

public:
    Truck(string mk, string mdl, int yr, int capacity) : Vehicle(mk, mdl, yr), cargo_capacity(capacity) {}

    void showDetails() override {
        Vehicle::showDetails();
        cout << " with " << cargo_capacity << " tons capacity" << endl;
    }
};

// Derived class: Motorcycle
class Motorcycle : public Vehicle {
public:
    Motorcycle(string mk, string mdl, int yr) : Vehicle(mk, mdl, yr) {}

    void showDetails() override {
        Vehicle::showDetails();
        cout << " (Motorcycle)" << endl;
    }
};

// Garage class to manage vehicles
class Garage {
    Vehicle* vehicles[10];  // Array of pointers (Max 10 vehicles)
    int count;

public:
    Garage() : count(0) {}  // Initialize count to 0

    void addVehicle(Vehicle* v) {
        if (count < 10) {
            vehicles[count++] = v;
        } else {
            cout << "Garage is full!\n";
        }
    }

    void listVehicles() {
        cout << "\nVehicles in Garage:\n";
        for (int i = 0; i < count; i++) {
            vehicles[i]->showDetails();
        }
    }
};

// Main function
int main() {
    Garage garage;

    Car car("Toyota", "Fortuner", 2022, 4);
    Truck truck("Tata", "Prima", 2023, 5);
    Motorcycle bike("Hero", "Splendor", 2021);

    garage.addVehicle(&car);
    garage.addVehicle(&truck);
    garage.addVehicle(&bike);

    garage.listVehicles();

    return 0;
}
