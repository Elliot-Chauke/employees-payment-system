#include "Salary.h"

// Constructor to initialize a Salary object
Salary::Salary(double sal) : Payment("Salary"), salary(sal) {}

// Function to calculate the payment amount
double Salary::pay() const
{
    return salary; // Returns the monthly salary amount
}
