#pragma once
#include <iostream>
#include <string>
#include "Inmate.h"

class SecurePrisoner : public Inmate
{
public:
	void InputDetails();
	void PrintDetails() const;
private:
	int securityLevel;
};