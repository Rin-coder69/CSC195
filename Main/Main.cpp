#include <iostream>
#include <vector>
#include <fstream>
#include "point.h"
using names_t = std::vector<std::string>;
namespace math {
	template<typename T1, typename T2>
	T1 max(T1 a, T2 b)
	{
		return(a > b) ? a : b;

	}
	
	void print(const names_t& names) {
		
		for (std::string name : names) {
			std::cout << name << std::endl;
		}
	}
	int g = 5;
	void StreamOut(std::ostream& ostream, std::string text) {
		ostream << text << std::endl;
	}

	void StreamIn(std::istream& istream, std::string text) {
		istream >> text;
	}

	int main()
	{
		StreamOut(std::cout, "Hello World");
		math::ipoint_t p(4, 5);
		//write out to file
		std::ofstream fstream("text.txt");
		
		StreamOut(fstream, "Hello World");
		fstream.close();

		//read in from fileq
		std::string Text;
		std::ifstream ifstream("text.txt");
		StreamIn(ifstream, Text);
		std::cout << Text << std::endl;
		ifstream.close();

		std::string text;
		
		Point<int> p1(23, 24);
		Point<int> p2(12, 10);
		Point<int> p3;
		p3 = p1 + p2;
		/*std::cout << p1.Add(p2) << std::endl;*/
		std::cout << p3.getX() << " " << p3.getY() << std::endl;
		//std::cout << std::max(5, 10) << std::endl;
		//std::cout << math::max(6, 13) << std::endl;
		///*std::vector<std::string> names = { "John", "Jane", "Doe" };*/
		//names_t names{ "Alex", "Bob", "Charlie" };
		//print(names);

	}
}
