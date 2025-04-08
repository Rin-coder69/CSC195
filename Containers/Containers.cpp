#include <iostream>
#include <vector>
#include <array>
#include <List>
#include <stack>
#include <map>
using namespace std;
int main()
{
	//int i = 0xf;
	array<int,5> arr = { 1,2,3,4,5 };
	cout << arr.size() << endl;
	for (int i = 0;i < arr.size(); i++) {
		cout << arr[i] << endl;
	}
	//vector
	vector<int> vec = { 1,2,3,4,5 };
	vec.push_back(6)

    cout << vec.size() << endl;
	cout << vec.capacity() << endl;

	//list
	list<int>list = { 1,2,3,4,5 };
	list.push_back(6);
	list insert(lst.begin(), 0);

	//map
	map<int, string>m;
	m["Riley"] = 46;
	m["garrett"] = 86;
	m["mike"] = 100;

	cout << m["riley"] << endl;
		
	//cout << &i << endl;
	cout << (void*)(&arr[0]) << endl;
	cout << (void*)(&arr[1]) << endl;
	cout << "Hello World!" << endl;
	return 0;
}