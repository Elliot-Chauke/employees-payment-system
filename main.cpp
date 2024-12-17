#include <QCoreApplication>
#include <iostream>
#include "EmployeeList.h"
#include "Salary.h"
#include "Hourly.h"
#include "Commission.h"
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    EmployeeList employees; // Create a list to store Employee pointers

    // Create and add Employee with a Salary payment
    Employee* e1 = new Employee("Elliot", "Chauke");
    e1->setPayment(new Salary(5000)); // Set salary payment
    employees.append(e1); // Add to employee list

    // Create and add another Employee with a Salary payment
    Employee* e2 = new Employee("Musa", "Manchidi");
    e2->setPayment(new Salary(5500)); // Set salary payment
    employees.append(e2); // Add to employee list

    // Create and add Employee with an Hourly payment
    Employee* e3 = new Employee("Sammy", "Smith");
    e3->setPayment(new Hourly(20)); // Set hourly rate
    employees.append(e3); // Add to employee list
    dynamic_cast<Hourly*>(e3->getPayment())->addHours(160); // Add hours worked

    // Create and add another Employee with an Hourly payment
    Employee* e4 = new Employee("Ndivho", "Tshililo");
    e4->setPayment(new Hourly(25)); // Set hourly rate
    employees.append(e4); // Add to employee list
    dynamic_cast<Hourly*>(e4->getPayment())->addHours(150); // Add hours worked

    // Create and add Employee with a Commission payment
    Employee* e5 = new Employee("Cedric", "Thonifhani");
    e5->setPayment(new Commission(2.5)); // Set commission rate
    employees.append(e5); // Add to employee list
    dynamic_cast<Commission*>(e5->getPayment())->addSales(1000); // Add sales

    // Create and add another Employee with a Commission payment
    Employee* e6 = new Employee("Lesego", "Mabolatse");
    e6->setPayment(new Commission(3.5)); // Set commission rate
    employees.append(e6); // Add to employee list
    dynamic_cast<Commission*>(e6->getPayment())->addSales(2000); // Add sales

    // Print report of payments owed to employees
    cout << "Payment Report\n" << endl;
    cout << "Salaried Paid Employees" << endl;
    cout << "------------------------" << endl;
    for (int i = 0; i < 2;i++)
    {
    Employee* emp = employees[i];
    cout << "Employee ID: " <<emp->getID() << endl;
    cout << "Name: " << emp->getName().toStdString() << endl;
    cout << "Payment Owed: R" << emp->getPayment()->pay() << endl;
    cout << endl;

    }

    cout << "Hourly Paid Employees" << endl;
    cout << "-----------------------" << endl;
    for (int i = 2; i < 4 ;i++)
    {
    Employee* emp = employees[i];
    cout << "Employee ID: " << emp->getID() << endl;
    cout << "Name: " << emp->getName().toStdString() << endl;
    cout << "Payment Owed: R" << emp->getPayment()->pay() << endl;
    cout << endl;
    }


    cout << "Commission Paid Employees" << endl;
    cout << "--------------------------" << endl;
    for (int i = 4; i < 6; i++)
    {
    Employee* emp = employees[i];
    cout << "Employee ID: " << emp->getID() << endl;
    cout << "Name: " << emp->getName().toStdString() << endl;
    cout << "Payment Owed: R" << emp->getPayment()->pay() << endl;
    cout << endl;
    }


    return a.exec();
}
