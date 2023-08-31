#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout << "Please give the radius of the circle:" << endl;
    float radius;
    double pi = 3.14159265358979323846;
    cin >> radius;
    cout << "Area of the circle is: " << pi * pow(radius, 2) << endl;
	
	return 0;
}