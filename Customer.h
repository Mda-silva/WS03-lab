/***********************************************************************
// OOP244 Workshop #03 p1: tester program
//
// File	main.cpp
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

#ifndef SENECA_CUSTOMER_H
#define SENECA_CUSTOMER_H

#include <iostream>
#include "Car.h"
namespace seneca {

	class Customer {
	private:
		int m_id;
		char* m_name;
		const Car* m_car;

	public:
		bool isEmpty() const;
		void setEmpty();
		void deallocateMemory();
		void set(int customerId, const char* name, const Car* car);
		void display() const;
		const Car& car()const;
	};
}

#endif // !SENECA_CUSTOMER_H
