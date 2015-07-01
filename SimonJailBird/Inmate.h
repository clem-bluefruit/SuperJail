#pragma once
#include <string>

class Inmate
{
private:
	unsigned int m_Number = 0;
	std::string m_Name;
	long m_Sentence = 0;
	const unsigned int sentenceTerm = 1000;
public:
	Inmate();
	explicit Inmate(int inmateNum);
	~Inmate();
	virtual void InputDetails();
	virtual void PrintDetails() const;
};
