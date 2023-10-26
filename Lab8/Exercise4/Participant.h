#include "Sortable.h"
#include <iostream>

using namespace std;

class Participant : public Sortable {
protected:
    string name;
    int age;
    double score;
public:
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
        if (score >= other_participant->getScore()) { //downcasting sortable into circle
            if (score == other_participant->getScore()) {
                if (age <= other_participant->getAge()) { //downcasting sortable into circle
                    if (score == other_participant->getAge()) {
                        return (name.compare(other_participant->getName()));
                    }
                    return true;
                } else {
                    return false;
                }
            }
            return true;
        } else {
            return false;
        }
    }
	void print() {
        std::cout << name << " " << age << " " << score;
    };
};