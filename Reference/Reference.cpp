

#include <iostream>

void func1(int* p) {
    if (p != nullptr) *p;

	}

int main()
{
    int i1 = 5;
    int* p1 = &i1;
    p1 = nullptr;

    int& r1 = i1;

	std::cout << &r1 << std::endl;
	std::cout << &i1 << std::endl;

	for (int i = 0; i < 100000; i++)
	{
		int* p = new int(i);
		std::cout << p1 << std::endl;
	}
}

