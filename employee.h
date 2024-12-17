#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>
#include "Payment.h"


class Employee {
private:
    int id;
    QString firstName;
    QString surname;
    Payment* payment;
    static int nextID;

public:
    Employee(const QString &fn, const QString &sn);
    Employee(const Employee &e);
    ~Employee();
    int getID() const;
    QString getName() const;
    void setPayment(Payment* pay);
    Payment* getPayment() const;
};

#endif // EMPLOYEE_H
