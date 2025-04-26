#include "student.h"
#include "iostream"
#include "console.h"


void Student::Read()
{
	Human::Read();
	std::cout << "GPA: ";
	std::cin >> m_gpa;
}
void Student::Write() {
	Human::Write();
	std::cout << "GPA: " << m_gpa << std::endl;
}