#include "Commission.h"

// Constructor to initialize a Commission object
Commission::Commission(double cr) : Payment("Commission"), commissionRate(cr), totalSales(0) {}

// Function to add sales to the total sales
void Commission::addSales(double sv)
{
    totalSales += sv; // Returns the total sales with the provided value
}

// Function to calculate the payment amount
double Commission::pay() const
{
    return commissionRate * totalSales; // Returns the total payment based on commission rate and sales
}
