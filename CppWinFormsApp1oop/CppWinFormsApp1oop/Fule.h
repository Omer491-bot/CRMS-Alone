#pragma once
using namespace System;

ref class Fule
{
public:
    int driverId;
    int fuleltr;   // I assume you meant fuel liter, so correcting the name.
    String^ fuletype;  // Fuel type (e.g., Petrol, Diesel)
    int price;    // Price of fuel

    // Constructor to initialize the Fule object
    Fule(int dId, int fLiter, String^ fType, int p)
        : driverId(dId), fuleltr(fLiter), fuletype(fType), price(p) {
    }
};

