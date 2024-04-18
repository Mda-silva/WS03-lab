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
#include "Car.h"
using namespace std;
namespace seneca {

	bool Car::isEmpty() const{

		return (m_makeModel == nullptr || m_makeModel[0] == '\0' ||
			m_serviceDesc == nullptr || m_serviceDesc[0] == '\0');


	}

	void Car::setEmpty()
	{
		if (m_makeModel == nullptr || m_serviceDesc == nullptr )

		{

			return;

		}
		m_makeModel = nullptr;
		m_serviceDesc = nullptr;
		m_licencePlate[0] = '\0';
		m_cost = 0;
	}

	void Car::deallocateMemory()
	{

		delete[] m_makeModel;
		delete[] m_serviceDesc;

		m_makeModel = nullptr;
		m_serviceDesc = nullptr;

	}

	void Car::set(const char plateNo[], const char* carMakeModel, const char* serviceDesc, double serviceCost)
	{

		
		if (carMakeModel != nullptr && carMakeModel[0] != '\0' && serviceDesc != nullptr && serviceDesc[0] != '\0')
		
		{
			strcpy(m_licencePlate, plateNo);

			m_makeModel = new char[strlen(carMakeModel) + 1];
			strcpy(m_makeModel, carMakeModel);

			m_serviceDesc = new char[strlen(serviceDesc) + 1];
			strcpy(m_serviceDesc, serviceDesc);

			m_cost = serviceCost;

		}

	}
	void Car::display() const {


		if (m_makeModel != nullptr && m_makeModel[0] != '\0' && m_serviceDesc != nullptr && m_serviceDesc[0] != '\0')
		{
			std::cout << std::left << std::setw(15) << "License Plate:";
			std::cout << std::right << std::setw(20) << m_licencePlate << std::endl;

			std::cout << std::left << std::setw(15) << "Model:";
			std::cout << std::right << std::setw(20) << m_makeModel << std::endl;

			std::cout << std::left << std::setw(15) << "Service Name:";
			std::cout << std::right << std::setw(20) << m_serviceDesc << std::endl;

			std::cout << std::left << std::setw(15) << "Service Cost:";
			std::cout << std::fixed << std::setprecision(2) << std::right << std::setw(20) << m_cost << std::endl;
		}

	}

}