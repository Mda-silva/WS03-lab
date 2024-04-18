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

#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include <string>
#include <iomanip>
#include "Customer.h"

namespace seneca {

	bool Customer::isEmpty() const 
	{

		return (m_name == nullptr || m_name[0] == '\0' ||
			m_car == nullptr);

	}

	void Customer::setEmpty()
	{
		m_id = NULL;
		m_name = nullptr;
		m_car = nullptr;

	}

	void Customer::deallocateMemory()
	{
		delete[] m_name;
		m_name = nullptr;
	}

	void Customer::set(int customerId, const char* name, const Car* car) {

		if (name != nullptr && name[0] != '\0' && car != nullptr )

		{

			m_name = new char[strlen(name) + 1];
			strcpy(m_name, name);


			m_id = customerId;
			m_car = car;
			
		}

	}

	void Customer::display() const {


		if (m_name != nullptr && m_name[0] != '\0' && m_car != nullptr)
		{

			std::cout << std::left << std::setw(15) << "Customer ID:";
			std::cout << std::right << std::setw(20) << m_id << std::endl;

			std::cout << std::left << std::setw(15) << "First Name :";
			std::cout << std::right << std::setw(20) << m_name << std::endl;

			m_car->display();
		}

	}

	const Car& Customer::car() const
	{
		return *m_car;
	}



}