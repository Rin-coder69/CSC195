#include "Header.h"
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    float weight;
	std::string name;
	int age;
    void f(){}
};

int main() {

    Student student("Nick");
    
    student.SetName("Nicholas");
    f();
    student.Write();
   
    Person person;
    person.age = 19;
    unsigned int i =  78;
    //printf("%d\n", i);
	cout << i << endl;
	cout << sizeof(int) << endl;
    cout << "Hello, World!" << endl;
    cout << "Git is now tracking this project!" << endl;

    char c = 'A';
	cout << (int)c << endl;
    f();
	std::cout << "Hello World!\n";



    return 0;
}



