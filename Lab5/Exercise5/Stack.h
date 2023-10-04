#pragma once

#include <iostream>

using namespace std;

struct Link {
			double data;
			Link* next;
			
			void initialize(double dat, Link* nxt) {
				data = dat;
				next = nxt;
			}
		};

class Stack {
	
	public:
		Link* head;
		

		Stack() {
			head = 0;
		}

		Stack(int size) {
			head = 0;
			double count = 1.0;
			for (int i=0;i<size;i++) {
				push(count);
				count += 0.1;
			}
		}

		~Stack() {
			while (head != 0) {
				cout << pop() << " ";
			}
		}

		void push(double dat) {
			Link* newLink = new Link;
			newLink->initialize(dat, head);
			head = newLink;
		}
		
		double peek() {
			return head->data;
		}
		
		double pop() {
			if(head == 0)
				return 0;
			
			double result = head->data;
			Link* oldHead = head;
			head = head->next;
			delete oldHead;
			return result;
		}
		
};
