#include "Sortable.h"
#include <iostream>

class Circle : public Sortable {
protected:
    float radius;
public:
    float getRadius() const {
        return radius;
    }
    void setRadius(float r) {
        radius = r;
    }
    Circle() {
        radius = 0;
    }
    Circle(float r) {
        radius = r;
    }
    bool compare( const Sortable* other) {
        if (radius < ((Circle*) other)->getRadius()) { //downcasting sortable into circle
            return true;
        } else {
            return false;
        }
    }
	void print() {
        std::cout << radius;
    };
};