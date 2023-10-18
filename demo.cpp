#pragma once

#include <iostream>
#include <math.h>

using namespace std;

class ClassName {
    private:
        string potato = "potato";
    protected: /*can only be accesed by friend classes, or classes that inherit this class.*/
        string nut;
    public: /*accesed by anyone*/
        float x;
        float y;
        ClassName() { /*default constructor, called when the user provides nothing in the () of the instance.*/
            x = 0;
            y = 0;
        }
        ClassName(float _x, float _y) {
            x = _x;
            y = _y;
        }
        void set(float _x, float _y) {
            x = _x;
            y = _y;
        }
        void add(ClassName input) {
            x += input.x;
            y += input.y;
        }
        void print(int i) { /*these 3 print functions are an example of overloading. print will do different things depending on what value it is given.*/
            cout << "Printing int: " << i << endl;
        }
        void print(double  f) {
            cout << "Printing float: " << f << endl;
        }
        void print(char* c) {
            cout << "Printing character: " << c << endl;
        }
};

int main( int argc, const char* argv[] )
{   
    ClassName* object = new ClassName();

    ClassName* object2 = new ClassName(3, 5);

    object->set(2, 5);

    (*object).add(*object2) /* the star operator is used to convert a variable from a pointer to an object. the & operator does the opposite.*/

}