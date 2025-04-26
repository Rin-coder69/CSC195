// SmartPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
int g = 10;

template <typename T>
struct smart_ptr
{	
	smart_ptr() = delete;
	smart_ptr(T* p) {
		this->p = p;
	} 
	~smart_ptr() {
		std::cout << "Deleted!\n";
		delete p;
	}

	T Dereference() {
		return *p;
	}
	T& operator * () {
		return *p;
	}
	T* operator & () {
		return p;
	}
	T* p = nullptr;
	
};
int main()
{
	g = 23;
	int i = 5;
	int* p = &i;
	
	{	
		
		smart_ptr<int> sptr{ new int(10) };
		*sptr = 20;
		std::cout << *sptr << std::endl;
		std::cout << sptr.Dereference() << std::endl;
		std::cout << &sptr << std::endl;
		//std::cout << sptr.p << std::endl;

		smart_ptr<float> sptr1{ new float(23.5f) };
		
	}
	std::unique_ptr<int> uptr = std::make_unique<int>(23);
	std::cout << *uptr << std::endl;
	std::shared_ptr<int> sharedptr = std::make_shared<int>(34);
	std::cout << sharedptr.use_count() << std::endl; {
		std::shared_ptr<int> sharedptr2 = sharedptr;
		std::cout << sharedptr.use_count() << std::endl;
	}
	std::shared_ptr<int> sharedptr3 = sharedptr;
	std::cout << sharedptr.use_count() << std::endl;
	
}
