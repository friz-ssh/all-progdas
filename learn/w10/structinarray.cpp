#include <iostream>
#include <string>
using namespace std;

struct employee
{
    string firstName;
    string lastName;
    int personID;
    string deptID;
    double yearlySalary;
    double monthlySalary;
    double yearToDatePaid;
    double monthlyBonus;
};

void initializeEmployees(employee employees[], int size)
{
    string firstName[] = {"John", "Jane", "Alice", "Bob", "Charlie"};
    string lastName[] = {"Doe", "Smith", "Johnson", "Brown", "Davis"};
    int personID[] = {101, 102, 103, 104, 105};
    string deptID[] = {"HR", "IT", "Finance", "Marketing", "Sales"};
    double yearlySalary[] = {60000, 75000, 80000, 50000, 90000};
    double monthlyBonus[] = {500, 600, 700, 400, 800};
    double monthySalary[] = {5000, 6250, 6666.67, 4166.67, 7500};
}
