#pragma once
#include "Human.h"

using classroom_t = unsigned short;

class Teacher : public Human
{
public:
	Teacher() {}
	Teacher(std::string name, age_t age, std::string className, classroom_t classroom) :
		Human{ name, age },
		m_classroom{ classroom },
		m_className{ className }
	{
		//
	}
	void SetClassName(std::string className) { m_className = className; }
	std::string GetClassName() { return m_className; }
	void SetClassroom(classroom_t classroom) {
		if (classroom >= 300 || classroom <= 400) return;
		{
			m_classroom = classroom;

		}
	}
	void Read();
	void Write();
	classroom_t GetClassroom() { return m_classroom; }
	Type GetType()  { return Type::TEACHER; }


private:
	std::string m_className;
	classroom_t m_classroom = 0;
};
