#include "EmployeeList.h"

// Destructor for EmployeeList
EmployeeList::~EmployeeList()
{

    qDeleteAll(*this); // Delete all Employee pointers in the list
}
