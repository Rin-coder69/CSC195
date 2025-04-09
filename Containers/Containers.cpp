#include <iostream>
#include <vector>
#include <array>
#include <List>
#include <stack>
#include <map>
#include <unordered_map>
using namespace std;



unsigned int GetHash(std::string str) {
	int hash = 0;
	//"Raymond"
	//65 35 42 15
	for (char c : str) {
		hash = hash * 31 + (int)c;
	}
	return hash;
}




int main()

{
	//int i = 0xf;
	array<int, 5> arr = { 1,2,3,4,5 };
	cout << arr.size() << endl;
	for (int i = 0;i < arr.size(); i++) {
		cout << arr[i] << endl;
	}
	//vector
	vector<int> vec = { 1,2,3,4,5 };
	vec.push_back(6);
	vec[0] = 5;

	cout << vec.size() << endl;
	cout << vec.capacity() << endl;

	stack<int> s;
	s.push(1);
	s.push(2);
	s.pop();
	cout << s.top() << endl;

	//list
	list<int> lst = { 1,2,3,4,5 };
	lst.push_back(6);
	lst.insert(lst.begin(), 0);
	for (auto iter = lst.begin();iter != lst.end(); iter++)
	{
		cout << *iter << endl;
	}
	auto it = lst.begin();
	cout << *it << endl;//0
	it++;
	cout << *it << endl;


	//map
	map<string, int> m;
	m["Riley"] = 46;
	m["garrett"] = 86;
	m["mike"] = 100;

	cout << m["riley"] << endl;

	for (auto iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}


	// unordered map
	unordered_map<string, string> um;
	um["Riley"] = "Allmenidinger";
	um["Garrett"] = "oxborrow";
	cout << um["Riley"] << endl;
	string name = "Raymond";
	int hash = GetHash(name);
	cout << hash << endl;

	int data[10];
	data[hash % 10] = 84025;

	cout << data[hash % 10] << endl;


		
	//cout << &i << endl;
	cout << (void*)(&arr[0]) << endl;
	cout << (void*)(&arr[1]) << endl;
	cout << "Hello World!" << endl;
	return 0;
}