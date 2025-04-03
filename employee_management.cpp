#include <iostream>
using namespace std;

// Base class: Employee
class Employee {
protected:
    string name;
    int id;
    int salary; 

public:
    Employee(string n, int i, int s) : name(n), id(i), salary(s) {}

    virtual void showDetails() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: $" << salary;
    }
};

// Derived class: Engineering
class Engineer : public Employee {
    string specialization;

public:
    Engineer(string n, int i, int s, string spec) : Employee(n, i, s), specialization(spec) {}

    void showDetails() override {
        Employee::showDetails();
        cout << ", Department: Engineering, Specialization: " << specialization << endl;
    }
};

// Derived class: Sales
class SalesPerson : public Employee {
    float salesTarget;

public:
    SalesPerson(string n, int i, int s, float target) : Employee(n, i, s), salesTarget(target) {}

    void showDetails() override {
        Employee::showDetails();
        cout << ", Department: Sales, Sales Target: $" << salesTarget << endl;
    }
};

// Derived class: HR
class HR : public Employee {
    int employeesManaged;

public:
    HR(string n, int i, int s, int managed) : Employee(n, i, s), employeesManaged(managed) {}

    void showDetails() override {
        Employee::showDetails();
        cout << ", Department: HR, Employees Managed: " << employeesManaged << endl;
    }
};

// Company class to manage employees
class Company {
    Employee* employees[10];  // Array of pointers (Max 10 employees)
    int count;

public:
    Company() : count(0) {}

    void addEmployee(Employee* e) {
        if (count < 10) {
            employees[count++] = e;
        } else {
            cout << "Company employee limit reached!\n";
        }
    }

    void listEmployees() {
        cout << "\nCompany Employees:\n";
        for (int i = 0; i < count; i++) {
            employees[i]->showDetails();
        }
    }
};

// Main function
int main() {
    Company company;

    Engineer eng("Shivam Singh", 101, 85000, "Software Development");
    SalesPerson sales("Rajesh Kumar", 102, 60000, 500000.30f);
    HR hr("Anjali Sharma", 103, 70000, 30);

    company.addEmployee(&eng);
    company.addEmployee(&sales);
    company.addEmployee(&hr);

    company.listEmployees();

    return 0;
}
