#pragma once
#using <System.dll>  
using namespace System;
ref class customer
{

public:
    String^ customerName;  
    String^ email;         
    int phoneNumber;       
    String^ address;       


    customer(String^ cName, String^ cEmail, int pNumber, String^ cAddress)
        : customerName(cName), email(cEmail), phoneNumber(pNumber), address(cAddress)
    {
        // You can add additional logic here if needed
    }
};
