#pragma once

#include <iostream>

struct LinkedList {

	struct Node {
		int* data;
		Node* next;
		
		void initialize(int* dat) {
			data = dat;
			next = nullptr;
		}
	}* head;

	LinkedList(int* dat) {
		Node* newNode = new Node;
        newNode->initialize(dat);
        head = newNode;
	}
	
    void add( LinkedList::Node* l, int n ) {
        Node* currentNode;
        Node* oldNodeNext = l->next
        Node* newHead = new Node;
        newHead->initialize(new int(0));
        currentNode = newHead;
        for (int i=1;i<n;i++) {
            Node* newNode = new Node;
            newNode->initialize(new int(i));
            currentNode->next = newNode;
            newNode->next = currentNode->next->next;
        }
    
        currentNode->next = oldNodeNext;
        l->next = newHead;
    }

	void print() {
        
        Node* current = head;
        while (current != nullptr) {
            std::cout << *(current->data) << std::endl;
            current = current->next;
        }
    }

    void cleanup() {
        Node* current = head;
        while (current != nullptr) {
            delete current->data;
            current = current->next;
        }
        delete current;
    }

};
