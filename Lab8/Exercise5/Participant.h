#include "Sortable.h"
#include <iostream>

using namespace std;

class Participant : public Sortable {
public:
    static bool (*comp_cb)(const Participant*, const Participant*);
    string name;
    int age;
    double score;
    string getName() const {
        return name;
    }
    void setName(string _name) {
        name = _name;
    }
    int getAge() const {
        return age;
    }
    void setAge(int _age) {
        age = _age;
    }
    double getScore() const {
        return score;
    }
    void setScore(double _score) {
        score = _score;
    }
    Participant() {
        name = "unnamed";
        age = 0;
        score = 0;
    }
    Participant(string _name, int _age, double _score) {
        name = _name;
        age = _age;
        score = _score;
    }
    bool compare( const Sortable* other) {
        Participant* other_participant = (Participant*) other;
        return (*comp_cb)(this, other_participant);
    }
	void print() {
        std::cout << name << " " << age << " " << score;
    };
};