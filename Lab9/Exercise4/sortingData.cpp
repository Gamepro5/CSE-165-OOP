#include <iostream>
#include <string>
#include <cctype>

#include "Data.h"
#include "Circle.h"
#include "Participant.h"

using namespace std;

int main( int argc, const char* argv[] )
{
	Data myData;
	
	string input = "";
	cin >> input;
	string name;
	int age;
	double score;
	float radius;
	while (toupper(input[0]) != 'Q') {
		switch (toupper(input[0])) {
			case 'C':
				cin >> radius;
				myData.add( new Circle(radius) );
				cout << "Circled added" << endl;
				break;
			case 'T':
				cin >> name;
				cin >> age;
				cin >> score;
				myData.add( new Participant(name, age, score) );
				cout << "Participant added" << endl;
				break;
			case 'S':
				myData.sort();
				cout << "Data sorted" << endl;
				break;
			case 'P':
				myData.print();
				break;
			default:
				break;
		}
		cin >> input;
	}

	return 0;
}