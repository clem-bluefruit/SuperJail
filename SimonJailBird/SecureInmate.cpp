#include <iostream>
#include <string>
#include "Inmate.h"
#include "SecurePrisoner.h"
using namespace ::std;

void SecurePrisoner::InputDetails()
{
	Inmate::InputDetails();
	cout << "Security Level: ";
	cin >> securityLevel;
}

void SecurePrisoner::PrintDetails() const
{
	Inmate::PrintDetails();
	cout << "S.Level: " << securityLevel << endl;
}