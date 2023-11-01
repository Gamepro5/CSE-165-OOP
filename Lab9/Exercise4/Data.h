#include <vector>
#include <algorithm>
#include "Sortable.h"
#include <iostream>

using namespace std;

class Data {
protected:
    vector<Sortable*> items;
public:
    void add(Sortable* item) {
        items.push_back(item);
    }
    void sort() {
        Sortable* temp;
        int j;
        for (int i=1;i<items.size();i++) {
            temp = items[i];
            j = i-1;
            while (j >= 0 && temp->compare(items[j])) {
                items[j+1] = items[j];
                j = j-1;
            }
            items[j+1] = temp;
        }
    }
    void print() {
        for (int i=0;i<items.size();i++) {
            items[i]->print();
            cout << endl;
        }
        cout << endl;
    }

};

