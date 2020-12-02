#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
	string name;
	int age;
public:
	int getage() { return age; }
	string getname() { return name; }
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
};
bool cmpAge(const int& a, const int& b) {
	if (a > b)
		return true;
	else
		return false;
}

bool cmpName(const string& a, const string& b) {
	if (a > b)
		return true;
	else
		return false;
}

int main() {

	vector<Person> v;
	v.push_back(Person("John", 33));
	v.push_back(Person("Kenin", 40));
	v.push_back(Person("Daniel", 15));
	v.push_back(Person("Snow", 20));

	sort(v.begin(), v.end(), cmpAge);
	for (int i = 0; i < 3; i++) {
		cout << v[i].getname() << v[i].getage() << endl;
	}
	sort(v.begin(), v.end(), cmpName);
	for (int i = 0; i < 3; i++) {
		cout << v[i].getname() << v[i].getage() << endl;
	}
}