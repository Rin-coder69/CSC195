#pragma once
#include <iostream>

using age_t = unsigned short;

class Human
{
public:
	enum class Type : unsigned short {
		STUDENT,
		TEACHER 
	};
	Type personType = Type::STUDENT;
	int s = static_cast<int>(Type::TEACHER);
	Human()
	{
		std::cout << "Constructor called\n";
		m_count++;
	}
	Human(std::string name, age_t age) :
		m_name{ name },
		m_age{ age }
	{

		std::cout << "Constructor called\n";
		m_count++;
	}
	~Human()
	{
		std::cout << "Destructor called\n";
		m_count--;
	}
	void virtual Read();
	void virtual Write();

	std::string GetName() {
		return m_name;
	}

	void SetName(std::string name) {
		m_name = name;
	}

	age_t GetAge() {
		return m_age;
	}
	void SetAge(age_t age)
	{
		m_age = age;
	}
	virtual Type GetType() = 0;
	static int GetCount() {
		return 0;
	}
protected:
	std::string m_name;
	age_t m_age = 0;
	static int m_count;
	static const float m_tax;
};

