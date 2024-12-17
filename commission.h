#ifndef COMMISSION_H
#define COMMISSION_H

#include "Payment.h"

class Commission : public Payment {
private:
    double commissionRate;
    double totalSales;

public:

    Commission(double cr);
    void addSales(double sv);
    double pay() const override;
};

#endif // COMMISSION_H
