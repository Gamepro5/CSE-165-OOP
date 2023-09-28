#pragma once

#include <iostream>

struct LinkedList {

	struct Link {
		int data;
		Link* next;
		
		void initialize(int dat) {
			data = dat;
			next = nullptr;
		}
	}* head;

	LinkedList(int dat) {
		Link* newLink = new Link;
        newLink->initialize(dat);
        head = newLink;
	}
	
    void add( LinkedList::Link* l, int n ) {
        for (int i=0;i<n;i++) {
            Link* newLink = new Link;
            newLink->initialize(i);
            l->next = newLink;
        }
    }

	void print() {
        Link* current = head;
        while (current != nullptr) {
            std::cout << current->data << std::endl;
            current = current->next;
        }
    }

    void cleanup() {
        Link* current = head;
        while (current != nullptr) {
            delete current->data;
            current = &(current->next);
        }
    }

};
