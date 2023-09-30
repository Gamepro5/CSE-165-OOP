#pragma once

#include <iostream>

struct Entry {
    std::string first_name;
    std::string last_name;
    std::string address;
    void setName(std::string _name) {
        first_name = _name;
    };
    void setLastname(std::string _name) {
        last_name = _name;
    };
    void setEmail(std::string _address) {
        address = _address;
    };
    std::string getName() {
        return first_name;
    };
    std::string getLastname() {
        return last_name;
    };
    std::string setEmail() {
        return address;
    };
    void print() {
        std::cout << first_name << " " << last_name << "'s address is: " << address << std::endl;
    }
};