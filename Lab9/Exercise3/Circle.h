#include "Sortable.h"
#include <iostream>
#include <typeinfo>

using namespace std;

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
        const Circle* der = dynamic_cast<const Circle*>(other);
        if (der) {
            if (radius < ((Circle*) other)->getRadius()) { //downcasting sortable into circle
            return true;
            } else {
                return false;
            }
        } else { // comparing with a participant
            return true;
        }
        
    }
	void print() {
        std::cout << "Circle with radius: " << radius;
    };
};