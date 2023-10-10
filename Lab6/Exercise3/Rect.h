#pragma once

#include <iostream>
#include <math.h>
#include "Vec.h"

using namespace std;

class Rect {
    private:
        float upper_left_x;
        float upper_left_y;
        float width;
        float height;
    public:
        Rect(float _upper_left_x, float _upper_left_y, float _width, float _height) {
            upper_left_x = _upper_left_x;
            upper_left_y = _upper_left_y;
            width = _width;
            height = _height;
        }
        bool contains(Vec vect) {
            if (vect.y >= upper_left_y-height && vect.y <= upper_left_y) {
                if (vect.x <= upper_left_x+width && vect.x >= upper_left_x) {
                    return true;
                }
            }
            return false;
        }

};