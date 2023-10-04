#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal {
friend class Dog;
protected:
	string name;
	int age;

public:
	static int count;
	Animal() {
		cout << "Creating Generic Animal" << endl;
		name = "Generic Animal";
		age = 0;
		count++;
	}

	Animal(string _name, int _age) {
		cout << "Creating Generic Animal" << endl;
		name = _name;
		age = _age;
		count++;
	}
	
	~Animal() {
		cout << "Deleting Generic Animal" << endl;
		count--;
	}

	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	int getAge() {
		return age;
	}

	void setAge(int age) {
		this->age = age;
	}

	void feed() {
		cout << "Some food, please!" << endl;
	}
};
