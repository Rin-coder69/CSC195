#include "Human.h"
#include "console.h"

int Human::m_count = 0;
const float Human::m_tax = 0.2f;
void func() {
	std::cout << "Func called\n";
}

void Human::Read()
{
	std::cout << "Name:  ";
	std::cin >> m_name;
	//m_name = GetData<std::string>();
	std::cout << "Age:  ";
	//std::cin >> m_age;
	m_age = GetData<age_t>();
}

void Human::Write()
{
	std::cout << "Name: " << m_name << std::endl;
	std::cout << "Age: " << m_age << std::endl;
}
