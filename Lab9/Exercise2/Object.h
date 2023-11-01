#include <iostream>

using namespace std;

class Object {
public:
    static int count;
    Object() {
        count++;
    }
    Object(const Object& other) {
        count++;
    }
};