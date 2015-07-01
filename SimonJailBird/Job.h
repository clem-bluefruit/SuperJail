#pragma once

#include <iostream>
#include <string>

class Job
{
private:
	int m_Hours;
	int m_Rate;
	int m_JobNum;
public:
	Job();
	~Job();
	const int GetAmount() const;
};
