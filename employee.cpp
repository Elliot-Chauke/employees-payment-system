#include "Employee.h"
#include "Salary.h"
#include "Hourly.h"
#include "Commission.h"

// Initialize the static member nextID to 1001
int Employee::nextID = 1001;

// Constructor to initialize an Employee object with a first name and surname and payment to 0
Employee::Employee(const QString &fn, const QString &sn)
    : firstName(fn), surname(sn), payment(0)
{
    id = nextID++; // The ID is assigned using the static nextID variable and then incremented
}

// Copy constructor to create a deep copy of an existing Employee object
Employee::Employee(const Employee &e)
    : id(e.id), firstName(e.firstName), surname(e.surname), payment(0)
{
    if (e.payment)
    {
        // Deep copy the payment based on its type
        if (dynamic_cast<Salary*>(e.payment))
            payment = new Salary(*dynamic_cast<Salary*>(e.payment));
        else if (dynamic_cast<Hourly*>(e.payment))
            payment = new Hourly(*dynamic_cast<Hourly*>(e.payment));
        else if (dynamic_cast<Commission*>(e.payment))
            payment = new Commission(*dynamic_cast<Commission*>(e.payment));
    }
}

// Destructor to clean up the dynamically allocated Payment object
Employee::~Employee()
{
    delete payment;
}

// Function to get the unique ID of the employee
int Employee::getID() const
{
    return id;
}

// Function to get the full name of the employee (first name and surname)
QString Employee::getName() const
{
    return firstName + " " + surname;
}

// Function to set the payment method for the employee
void Employee::setPayment(Payment* pay)
{
    if (payment != pay)
    {
        delete payment;  // Free the memory of the old payment object
        payment = pay;  // Assign the new payment object
    }
}

// Returns a pointer to the Payment object
Payment* Employee::getPayment() const
{
    return payment;
}
