#pragma once
using namespace System;

ref class Booking
{
public:
    int carId;
    int customerId;
    int driverId;
    int bookingDate;
    String^ pickUpLoc;
    String^ dropofLoc;
    int^ returnDate;


    Booking(int carId, int cId, int dId, int Bdate, String^ picloc, String^ drploc, int^ retDate)
        : carId(carId), customerId(cId), driverId(dId), bookingDate(Bdate), pickUpLoc(picloc), dropofLoc(drploc), returnDate(retDate)
    {
    }
};



