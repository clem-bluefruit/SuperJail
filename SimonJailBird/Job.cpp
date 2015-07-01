#include <iostream>
#include <string>
#include "Job.h"
using namespace ::std;

Job::Job()
	: m_Hours(0),
	  m_Rate(50),
	  m_JobNum(1)
{}

Job::~Job()
{}

const int Job::GetAmount() const
{
	return (m_Rate * m_Hours);
}
