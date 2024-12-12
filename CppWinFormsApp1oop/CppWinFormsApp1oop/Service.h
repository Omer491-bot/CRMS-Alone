#pragma once
using namespace System;
ref class Service
{
	int carId;
	String^ serviceType;
	String^ servicespec;
	int date;
	String^ detail;
	Service(int cId, String^ sType, String^ sSpec, int sDate, String^ sDetail)
		: carId(cId), serviceType(sType), servicespec(sSpec), date(sDate), detail(sDetail)
	{
	}


};

