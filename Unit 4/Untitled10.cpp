#include <iostream>
#include <iomanip>

class Employee {
protected:
    int empId;
    float salary;

public:
    Employee(int id, float sal) : empId(id), salary(sal) {}

    void displayDetails() {
        std::cout << "Employee ID: " << empId << std::endl;
        std::cout << "Salary: $" << std::fixed << std::setprecision(2) << salary << std::endl;
    }
};

class empLevel : public Employee {
public:
    empLevel(int id, float sal) : Employee(id, sal) {}

    void determineLevel() {
        if (salary > 100.0) {
            std::cout << "Level: 1" << std::endl;
        } else {
            std::cout << "Level: 2" << std::endl;
        }
    }
};

int main() {
    int empId;
    float salary;

    std::cin >> empId >> salary;

    empLevel emp(empId, salary);

    emp.displayDetails();
    emp.determineLevel();

    return 0;
}
output
564
$2.4
Employee ID: 564
Salary: $0.00
Level: 2
