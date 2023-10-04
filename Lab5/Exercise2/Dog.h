#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include "Animal.h"

using namespace std;

class Dog : public Animal {
    public:
    Dog(string name, int age) {
		cout << "Creating Dog" << endl;
		this->name = name;
        this->age = age;
	}
    Dog() {
		cout << "Creating Dog" << endl;
		this->name = "Unnamed Dog";
		this->age = 0;
	}
	
	~Dog() {
		cout << "Deleting Dog" << endl;
	}
    void feed() {
		cout << "Some dog food, please!" << endl;
	}
};