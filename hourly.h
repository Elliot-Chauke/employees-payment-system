#ifndef HOURLY_H
#define HOURLY_H

#include "Payment.h"

class Hourly : public Payment {
private:
    double hourlyRate;
    double hours;

public:
    Hourly(double hr);
    void addHours(double hrs);
    double pay() const override;
};

#endif // HOURLY_H
