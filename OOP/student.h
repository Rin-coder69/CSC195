#pragma once
#include <iostream>
#include "Human.h"

class Student : public Human
{
public:
	Student() {
		std::cout << "Student Constructor called\n";
		
	}
	Student(std::string name, age_t age, double gpa) : Human( name,age ) ,m_gpa{ gpa } {

		m_name = name;
		m_age = age;
		m_gpa = gpa;
		std::cout << "Student Constructor called\n";
		
	}
	void Read();
	void Write();

	void SetGPA(double gpa) { m_gpa = gpa; }
	float GetGPA() { return m_gpa; }

	Type GetType()override { return Type:: STUDENT; }
private:
	double m_gpa = 4.0f;
};