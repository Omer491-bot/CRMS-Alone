
#pragma once
using namespace System;
ref class driver
{

public:
    int driverId;
    String^ name;
    String^ licenseNumber;
    String^ Adress;
    driver::driver(int dId, String^ dName, String^ dLicenseNumber, String^ dAddress)
        : driverId(dId), name(dName), licenseNumber(dLicenseNumber), Adress(dAddress) {
    };

//
//    Driver(int id, string n, string license, double r)
//        : driverId(id), name(n), licenseNumber(license), rating(r) {
//    }
};

