/***********************************************************************
// OOP244 Workshop #03 p1: tester program
//
// File	Car.h
// Version 1.0
// Date: September 28, 2023
// Author: Yosef Ashibani, Fardad Soleimanloo
// Description
//
// Revision History
// -----------------------------------------------------------
// Name Marquez Dasilva            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/

#ifndef SENECA_CAR_H
#define SENECA_CAR_H

#include <iostream>

namespace seneca {

	class Car {
	private: 
		char m_licencePlate[9];
		char* m_makeModel;
		char* m_serviceDesc;
		double m_cost;

	public: 
		bool isEmpty() const;
		void setEmpty();
		void deallocateMemory();
		void set(const char plateNo[], const char* carMakeModel, const char* serviceDesc, double serviceCost);
		void display() const;
	};
}

#endif // !SENECA_CAR_H

