#pragma once
#include <string>
#include <iostream>
#include "Inmate.h"
#include "SecurePrisoner.h"

class Jail
{
public:
	Jail();
	~Jail();
	void AddInmate();
	void AddSecureInmate();
	void PrintList() const;
private:
	Inmate *inmateList[10];
	int count;
};
