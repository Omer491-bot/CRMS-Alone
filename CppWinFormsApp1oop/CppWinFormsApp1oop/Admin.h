#pragma once
using namespace System;

ref class Admin
{
public:
    String^ username;  
    String^ password;  

 
    Admin(String^ u, String^ p)
        : username(u), password(p) {
    }
};

