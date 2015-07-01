#include <iostream>
#include <string>
using namespace ::std;

#include "Jail.h"

Jail::Jail()
	: count(0)
{}

Jail::~Jail()
{
	for (int id = 0; id < count; id++)
	{
		delete inmateList[id];
		inmateList[id] = nullptr;
	}
}

void Jail::AddInmate()
{
	Inmate *pInmate = new Inmate;
	pInmate->InputDetails();
	inmateList[count] = pInmate;
	count++;
}

void Jail::AddSecureInmate()
{
	SecurePrisoner *pSecureInmate = new SecurePrisoner;
	pSecureInmate->InputDetails();
	inmateList[count] = pSecureInmate;
	count++;
}

void Jail::PrintList() const
{
	for (int id = 0; id < count; id++)
	{
		cout << endl;
		inmateList[id]->PrintDetails();
	}
}
