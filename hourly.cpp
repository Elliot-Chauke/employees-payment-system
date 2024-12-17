#include "Hourly.h"

// Constructor to initialize an Hourly payment object
Hourly::Hourly(double hr) : Payment("Hourly"), hourlyRate(hr), hours(0) {}

// Function to add hours worked to the total hours
void Hourly::addHours(double hrs)
{
    hours += hrs; // Increases the total hours worked
}

// Function to calculate the payment amount
double Hourly::pay() const
{
    return hourlyRate * hours; // Returns the total payment based on hourly rate and hours worked
}
