#include <iostream>
#include <string>

using namespace std;

class Animal {
    protected: /*can only be accesed by friend classes, or classes that inherit this class.*/
        float age = 0;
        float health = 100;
    public: /*accesed by anyone*/
        virtual void speak() {}; /*virtual function. runtime polymorphism. a class that extends/inherits this class will be required by the compiler to implement speak()*/

        float getAge() {
            return age;
        }

        Animal() {

        }
        
        Animal(Animal &t) { //copy constructor. called when a previously uninitialized obejct is assigned to this object
    

        }

        Animal& operator=(const Animal& other) { //overloads assignment operator
            age = other.age;
            health = other.health;

            return *this;
        }

        ~Animal() { /*a destructor. called when the object is being deleted from memory.*/
            cout << "I am deleted :( " << endl;
        }

        void die() {
            cout << "ow i am ded" << endl;
            health = 0;
        }

        void hit(float damage) {
            health -= damage;
            if (health <= 0) {
                die();
            }
        }

        void heal(float value) {
            health += value;
        }
};

class Dog : public Animal {
    private:
        string name;
    public:
        Dog() {

        }
        Dog(string _name) {
            name = _name;
        }
        void speak() {
            cout << "WOOF! My name is " << name << ". I am " << getAge() << " years old!" << endl; /*getAge is inherited from the animal class.*/
    
        }
};


class Cat : public Animal {
    private:
        string name;
        int lives = 9;
    public:
        Cat() { /*this constructor is called when the user gives no parameters*/
            name = "unnamed";
        }

        Cat(string _name) { /*this constructor is called when the user gives the _name parameter.*/
            name = _name;
        }

        void setName(string _name) {
            name = _name;
        }

        void hit(float damage) { /*this is an example of function overriding. runtime polymorphism. hit has been overridden to do something different for cats.*/
            health -= damage;
            cout << name << " took " << damage << endl;
            if (health <= 0) {
                lives--;
                if (lives < 0) {
                    die();
                }
            }
        }

        void speak() {
            cout << "MEOW! My name is " << name << ". I am " << getAge() << " years old!" << endl; /*getAge is inherited from the animal class.*/
    
        }

        void print(int i) { /*these 3 print functions are an example of overloading. compile time polymorphism. print will do different things depending on what value it is given.*/
            cout << "Printing int: " << i << endl;
        }
        void print(double  f) {
            cout << "Printing float: " << f << endl;
        }
        void print(char* c) {
            cout << "Printing character: " << c << endl;
        }
};


class Shape {
    public:
    Shape() {
        cout << "Shape Constructor\n";
    };
    string shape;
};

class Color {
    public:
    Color() {
        cout << "Color Constructor\n";
    };
    string color;
};

class ColoredSquare : public Shape, public Color { //multiple inheritance first calls constructor of shape, then color, from left 
    public:
    ColoredSquare() {
        color = "blue";
        shape = "square";
    }

    int count;
};

template <typename T> 
class FancyArray { //template 
    public:
    T data[5];
};


class Time {
protected:
public:
    int seconds;
    int minutes;
    int hours;
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int _hours, int _minutes, int _seconds) {
        hours = _hours;
        minutes = _minutes;
        seconds = _seconds;
    }
    void print() {
        std::cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << std::endl;
    }
    Time operator+(Time const& other) {
        Time res;
        res.seconds += seconds + other.seconds;
        if (res.seconds >= 60) {
            res.minutes += int(res.seconds/60);
            res.seconds = res.seconds % 60;
        }
        res.minutes += minutes + other.minutes;
        if (res.minutes >= 60) {
            res.hours += int(res.minutes/60);
            res.minutes = res.minutes % 60;
        }
        res.hours += hours + other.hours;
        res.hours = res.hours % 24;
        
        return res;
    }
    Time operator++() { //pre increment
        hours++;
        hours = hours % 24;
        return *this;
    }
    Time operator++(int) { //post incremenet
        Time temp = *this;
        ++hours;
        hours = hours % 24;
        return temp;
    }
};

int main( int argc, const char* argv[] ) {

    Cat* mittens = new Cat();

    Cat* fluffy = new Cat("Fluffy");

    Dog* roofus = new Dog("Roofus");

    Dog d;

    d.speak();

    mittens->setName("Mittens");

    mittens->speak();

    (*fluffy).speak(); /* the star operator is used to convert a variable from a pointer to an object. the & operator does the opposite.*/

    roofus->speak();

    mittens->hit(125);

    roofus->hit(100);

    delete fluffy;

    ColoredSquare* temp = new ColoredSquare();

    FancyArray<int>* arr = new FancyArray<int>(); // template example

}
