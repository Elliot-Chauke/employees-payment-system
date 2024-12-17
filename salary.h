#ifndef SALARY_H
#define SALARY_H

#include "Payment.h"


class Salary : public Payment {
private:
    double salary;

public:
    Salary(double sal);
    double pay() const override;
};

#endif // SALARY_H
