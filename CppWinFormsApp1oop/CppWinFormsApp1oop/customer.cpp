#include "customer.h"

customer::customer(String^ cName, String^ cEmail, int pNumber, String^ cAddress)
    : customerName(cName), email(cEmail), phoneNumber(pNumber), address(cAddress)
{
    throw gcnew System::NotImplementedException();
}