#include "Human.h"
#include "school.h"
#include "Student.h"
#include "teacher.h"
#include <iostream>
#include <vector>

int main() {
	
	School school;
	bool quit = false;
	while (!quit) {

		//display menu
		std::cout << "1. Add Human\n";
		std::cout << "2. Display All Humans\n";
		std::cout << "3. Display Human of Type\n";
		std::cout << "4. Display Human by Name\n";
		std::cout << "5. Display Human by Age\n";
		std::cout << "6. Quit\n";

		unsigned short selection;
		std::cin >> selection;
		std::string name = "";
		switch (selection)
		{
		case 1:
			std::cout << "1.Student\n";
			std::cout << "2.Teacher\n";
			unsigned short type;
			std::cin >> type;

			school.Add(static_cast<Human::Type>(type - 1));
			break;
		case 2:
			system("cls");
			school.DisplayAll();
			break;
		case 3:
			std::cout << "<--Student-->\n";
			school.DisplayByType(Human::Type::STUDENT);
			std::cout << "<--Teacher-->\n";
			school.DisplayByType(Human::Type::TEACHER);
			std::cin >> type;
			break;
		case 4:
			
			std::cout << "Enter name: ";
			std::cin >> name;
			school.DisplayByName(name);
			break;
		case 5:
			std::cout << "Enter age: ";
			age_t age;
			std::cin >> age;
			school.DisplayByAge(age);
			break;
		case 6:
			quit = true;
			break;


		default:
			break;
		}
	}

}