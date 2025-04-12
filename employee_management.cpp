#include <iostream>
#include <vector>
#include <memory>
using namespace std;

// Base class: Employee
class Employee {
protected:
    string name;
    int id;
    float salary;

public:
    Employee(string n, int i, float s) : name(n), id(i), salary(s) {}

    virtual void showDetails() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: $" << salary;
    }

    virtual ~Employee() {}
};

// Derived class: Engineer
class Engineer : public Employee {
    string specialization;

public:
    Engineer(string n, int i, float s, string spec)
        : Employee(n, i, s), specialization(spec) {}

    void showDetails() override {
        Employee::showDetails();
        cout << ", Department: Engineering, Specialization: " << specialization << endl;
    }
};

// Derived class: SalesPerson
class SalesPerson : public Employee {
    float salesTarget;

public:
    SalesPerson(string n, int i, float s, float target)
        : Employee(n, i, s), salesTarget(target) {}

    void showDetails() override {
        Employee::showDetails();
        cout << ", Department: Sales, Sales Target: $" << salesTarget << endl;
    }
};

// Derived class: HR
class HR : public Employee {
    int employeesManaged;

public:
    HR(string n, int i, float s, int managed)
        : Employee(n, i, s), employeesManaged(managed) {}

    void showDetails() override {
        Employee::showDetails();
        cout << ", Department: HR, Employees Managed: " << employeesManaged << endl;
    }
};

// Company class
class Company {
    vector<Employee*> employees;

public:
    void addEmployee(Employee* e) {
        employees.push_back(e);
    }

    void listEmployees() {
        cout << "\n--- Company Employees ---\n";
        for (auto e : employees) {
            e->showDetails();
        }
    }

    ~Company() {
        for (auto e : employees) {
            delete e; // Clean up dynamically allocated memory
        }
    }
};

// Utility to input employee data
void addEmployeeMenu(Company& company) {
    int choice;
    cout << "\nAdd New Employee:\n";
    cout << "1. Engineer\n2. SalesPerson\n3. HR\nEnter choice: ";
    cin >> choice;

    string name, spec;
    int id, managed;
    float salary, target;

    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Salary: ";
    cin >> salary;

    switch (choice)
