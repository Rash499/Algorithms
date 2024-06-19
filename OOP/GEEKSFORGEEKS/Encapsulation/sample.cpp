#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person(string name1, int age1) {
	this->name = name1;
	this->age = age1;
	}
	void setName(string name2) {
	this->name = name2;
	}
	string getName() {
	return name;
	}
	void setAge(int age2) {
	this->age = age2;
	}
	int getAge() {
	return age;
	}
};

int main() {
Person person("John Doe", 30);

cout << "Name: " << person.getName() << endl;
cout << "Age: " << person.getAge() << endl;

person.setName("Jane Doe");
person.setAge(32);

cout << "Name: " << person.getName() << endl;
cout << "Age: " << person.getAge() << endl;

person.setName("bfsbvb");
person.setAge(45);

cout << "Name: " << person.getName() << endl;
cout << "Age: " << person.getAge() << endl;

return 0;
}
