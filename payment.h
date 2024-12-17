#ifndef PAYMENT_H
#define PAYMENT_H

#include <QString>


class Payment {
protected:
    QString type;

public:
    Payment(const QString &typ);
    virtual ~Payment();
    QString getType() const;
    virtual double pay() const = 0;
};

#endif // PAYMENT_H
