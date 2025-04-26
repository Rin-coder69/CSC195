#pragma once
#include "Human.h"
#include <vector>
class School
{
public:
	~School();

	void Add(Human::Type type);

	void DisplayAll();
	void DisplayByType(Human::Type type)
	{
		for (Human* human : m_humans)
		{
			if (human->GetType() == type)
			{
				human->Write();
			}
		}
	}
	void DisplayByName(std::string name)
	{
		for (Human* human : m_humans)
		{
			if (human->GetName() == name)
			{
				human->Write();
			}
		}
	}
	void DisplayByAge(age_t age)
	{
		for (Human* human : m_humans)
		{
			if (human->GetAge() == age)
			{
				human->Write();
			}
		}
	}

	
private:
	std::vector<Human*>m_humans;
	std::vector<int> ints;
};