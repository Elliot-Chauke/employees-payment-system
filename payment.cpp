#include "Payment.h"

// Constructor to initialize a Payment object
Payment::Payment(const QString &typ) : type(typ) {}

// Virtual destructor for the Payment class
Payment::~Payment() {}

// Function to get the type of payment
QString Payment::getType() const
{
    return type; // Returns the payment type
}
