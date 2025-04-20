#include "student.h"
#include "iostream"
#include "console.h"


void Student::Read()
{
	std::cout << "GPA: ";
	std::cin >> m_gpa;
}
void Student::Write() {
	std::cout << "GPA: " << m_gpa << std::endl;
}