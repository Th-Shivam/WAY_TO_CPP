#include <iostream>
#include <vector>
#include <memory>  // for smart pointers
using namespace std;

// Base class
class Vehicle {
protected:
    string make, model;
    int year;

public:
    Vehicle(string mk, string mdl, int yr) : make(mk), model(mdl), year(yr) {}
    virtual ~Vehicle() {}

    virtual void showDetails() const {
        cout << year << " " << make << " " << model;
    }
};

// Derived class: Car
class Car : public Vehicle {
    int num_doors;

public:
    Car(string mk, string mdl, int yr, int doors)
        : Vehicle(mk, mdl, yr), num_doors(doors) {}

    void showDetails() const override {
        Vehicle::showDetails();
        cout << " with " << num_doors << " doors" << endl;
    }
};

// Derived class: Truck
class Truck : public Vehicle {
    int cargo_capacity;

public:
    Truck(string mk, string mdl, int yr, int capacity)
        : Vehicle(mk, mdl, yr), cargo_capacity(capacity) {}

    void showDetails() const override {
        Vehicle::showDetails();
        cout << " with " << cargo_capacity << " tons capacity" << endl;
    }
};

// Derived class: Motorcycle
class Motorcycle : public Vehicle {
public:
    Motorcycle(string mk, string mdl, int yr)
        : Vehicle(mk, mdl, yr) {}

    void showDetails() const override {
        Vehicle::showDetails();
        cout << " (Motorcycle)" << endl;
    }
};

// Garage class to manage vehicles
class Garage {
    vector<unique_ptr<Vehicle>> vehicles;

public:
    void addVehicle(unique_ptr<Vehicle> v) {
        if (vehicles.size() < 10) {
            vehicles.push_back(move(v));
            cout << "Vehicle added successfully.\n";
        } else {
            cout << "Garage is full!\n";
        }
    }

    void listVehicles() const {
        cout << "\nVehicles in Garage:\n";
        if (vehicles.empty()) {
            cout << "No vehicles yet.\n";
        }
        for (const auto& v : vehicles) {
            v->showDetails();
        }
    }
};

// Function to display menu
void showMenu() {
    cout << "\n--- Garage Menu ---\n";
    cout << "1. Add Car\n";
    cout << "2. Add Truck\n";
    cout << "3. Add Motorcycle\n";
    cout << "4. Show All Vehicles\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

// Main function
int main() {
    Garage garage;
    int choice;

    do {
        showMenu();
        cin >> choice;

        string make, model;
        int year, doors, capacity;

        switch (choice) {
            case 1:
                cout << "Enter Car Make, Model, Year, Number of Doors: ";
                cin >> make >> model >> year >> doors;
                garage.addVehicle(make_unique<Car>(make, model, year, doors));
                break;

            case 2:
                cout << "Enter Truck Make, Model, Year, Cargo Capacity (tons): ";
                cin >> make >> model >> year >> capacity;
                garage.addVehicle(make_unique<Truck>(make, model, year, capacity));
                break;

            case 3:
                cout << "Enter Motorcycle Make, Model, Year: ";
                cin >> make >> model >> year;
                garage.addVehicle(make_unique<Motorcycle>(make, model, year));
                break;

            case 4:
                garage.listVehicles();
                break;

            case 5:
                cout << "Exiting Garage System. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
