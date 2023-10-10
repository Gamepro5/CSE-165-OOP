#pragma once

#include <iostream>
#include <math.h>

using namespace std;

class Vec {
    public:
        float x;
        float y;
        Vec() {
            x = 0;
            y = 0;
        }
        Vec(float _x, float _y) {
            x = _x;
            y = _y;
        }
        void set(float _x, float _y) {
            x = _x;
            y = _y;
        }
        void add(Vec input) {
            x += input.x;
            y += input.y;
        }
        void print() {
            cout << "(" << x << ", " << y << ")" << endl;
        }
};