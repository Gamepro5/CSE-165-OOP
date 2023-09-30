#pragma once

#include <iostream>
#include "Entry.h"
#include <vector>

struct AddressBook {
    std::vector<Entry*> entries;
    void add(Entry* entry) {
        entries.push_back(entry);
    }
    void print() {
        for (int i=0;i<entries.size();i++) {
            entries[i]->print();
        }
    }
};