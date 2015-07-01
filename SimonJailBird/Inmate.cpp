#include <iostream>
#include <string>
#include "Inmate.h"
using namespace ::std;

Inmate::Inmate()
	: m_Name(),
	  m_Number(0),
	  m_Sentence(0)
{}

Inmate::Inmate(int inmateNum)
	: m_Name("Ben Shingleton"),
	  m_Number(inmateNum),
	  m_Sentence(0)
{}

Inmate::~Inmate()
{}

void Inmate::InputDetails()
{
	cout << "Enter Details" << endl << "Name: ";
	cin >> m_Name;
	cout << "Prisoner Ref: ";
	cin >> m_Number;
	cout << endl;
}

void Inmate::PrintDetails() const
{
	cout << "Prisoner Name: " << m_Name << endl << "Prisoner Ref: " << m_Number << endl;
}
