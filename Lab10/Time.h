#include <iostream>

using namespace std;

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
        return temp;
    }
};