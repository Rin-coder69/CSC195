#include "teacher.h"

void Teacher::Read()
{
	std::cout << "<---------------TEACHER---------------->\n ";
	Human::Read();

	std::cout << "Class Nane: ";
	std::cin >> m_className;

	std::cout << "Classroom: ";
	std::cin >> m_classroom;
}

void Teacher::Write()
{
	Human::Write();
	std::cout << "<---------------TEACHER---------------->\n ";
	std::cout << "Class Name: " << m_className << std::endl;
	std::cout << "Classroom: " << m_classroom << std::endl;
}
