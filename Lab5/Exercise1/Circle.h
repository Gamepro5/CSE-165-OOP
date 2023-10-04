#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

class Circle {
protected:
	double x;
    double y;
    double r;

public:
	Circle() {
		x = 0;
        y = 0;
        r = 1;
	}

    Circle(double _x, double _y, double _r) {
        x = _x;
        y = _y;
        r = _r;
    }
	
	~Circle() {
		cout << "Circle deleted" << endl;
	}

	double getArea() {
        return (3.14159265358979323846 * pow(r, 2));
    }

    double getX() {
        return x;
    }
    void setX(double _x) {
        x = _x;
    }
    double getY() {
        return y;
    }
    void setY(double _y) {
        y = _y;
    }
    double getR() {
        return r;
    }
    void setR(double _r) {
        r = _r;
    }
};
