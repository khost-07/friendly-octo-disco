#include <iostream>
using namespace std;

class Employee {
private:
    int empId;
    string empName;
    float salary;

public:
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Employee Name: ";
        cin >> empName;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayData() {
        cout << empId << " " << empName << " " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    
    Employee emp[n];
    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << (i + 1) << endl;
        emp[i].getData();
    }
    
    cout << "\nEmployee Details:" << endl;
    cout << "ID\tName\tSalary" << endl;
    cout << "========================" << endl;
    
    for (int i = 0; i < n; i++) {
        emp[i].displayData();
    }
    
    return 0;
}