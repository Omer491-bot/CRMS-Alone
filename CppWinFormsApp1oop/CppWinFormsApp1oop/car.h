#pragma once
#using <System.dll>  
using namespace System; 

ref class Car
{
public:
    int carId;
    String^ model;    
    int mileage;
    String^ brand;
    String^ type;

    
    Car(int id, String^ m, int mil, String^ b, String^ t)
        : carId(id), model(m), mileage(mil), brand(b), type(t)
    {
    }
};


