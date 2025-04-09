#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>
using namespace std;
//array
int main()
{
	array<string, 7> arr = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
	//vector
	vector<int> vec = { 1,2,3,4,5 };
	vec.push_back(6);
	vec.push_back(7);
	vec.pop_back();

	//list
	list<string> fruit = {"Orange", "Apple", "Starfruit"};
	fruit.push_back("Banana");
	fruit.insert(fruit.begin(), "Mango");
	fruit.remove("Apple");
	for
		(auto it = fruit.begin(); it != fruit.end(); ++it)
	{
		cout << *it << endl;
	}
	//map
	map<string, int> fp;
	fp["Orange"] = 200;
	fp["Apple"] = 100;
	fp["Starfruit"] = 300;
	fp.insert(make_pair("Banana", 150));
	fp.insert(make_pair("Mango", 250));
	fp.insert(make_pair("Grapes", 50));
	for (auto it = fp.begin(); it != fp.end(); ++it)
	{
		cout << it->first << ": " << it->second << endl;
	}




}

