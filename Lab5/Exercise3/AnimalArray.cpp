#include <iostream>
#include "Dog.h"
#include "Animal.h"
#include "display.h"
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main(int argc, const char * argv[])
{
    vector<Animal*> animals;

    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        char type;
        string name;
        int age;
        cin >> type;
        cin >> name;
        cin >> age;
        if (type = 'A') {
            animals.push_back(new Animal(name, age));
        } else if (type = 'D') {
            animals.push_back(new Dog(name, age));
        }
    }
	
    display(animals);

	return 0;
}