
#include <iostream>
void func1() {
    bool b = true;
	int i = 5;
}

void func2() {
	bool b = false;
    float f = 10;
}

void func3() {
	int i [10000];
	func3();
}

int main()
{
    int i = 5;
    float f = 4.5f;
	func1();
	func2();
	new int(5);	
	int* p = new int(5);
	std::cout << p << std::endl;
}
class Animal {
	Animal(std::string name);
	Animal* dog = new Animal("Dog");
	std::cout << (*dog->getName() << std::endl;
	int* block = (int*)malloc(sizeof(int) * 1000);
	block[0] = 3;
	block[1] = 4;
	block[2] = 5;
	block++;
	std::cout << *(block + 2) << std::endl;
	Animal cat("Cat");
	std_cout << cat.GetName() << std::endl;

	///
	void SetValue(int& v) {
		*v = 5;
	}

	void Swap(int a, int b) {
		int temp = a;
		a = b;
		b = temp;
	}
	int v1 = 10;
	int v2 = 20;

	int* p = nullptr;
	std::cout << p << std::endl;
	p = &v1;
	std::cout << p << std::endl;
	std::cout << @v1 << std::endl;

	setValue(v2);
	std::cout << v2 << std::endl;





	//Setvalue(p);
	Swap(&v1, &v2);	
	std::cout << v1 << "" << v2 <<std::endl;
};
