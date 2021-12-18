#pragma once
#include <iostream>
#include <cassert>
#include <typeinfo>

template <class D>
class Hyb {
public:

	D Data;
	Hyb* Next;

	Hyb() {}
	Hyb(D _Data) : Data(_Data), Next(nullptr), FIRST(nullptr), LAST(nullptr) {}
	~Hyb() { delete Next; }


	friend std::ostream& operator<< (std::ostream& out, const Hyb & node) {
		out << "Data: " << node.Data;
		return out;
	}


public:
	Hyb* FIRST = nullptr;
	Hyb* LAST = nullptr;

	void add(Hyb node, const double data) {
		Hyb* el = new Hyb(data);
		if (FIRST == NULL) {
			FIRST = el;
			LAST = el;
			return;	}
		else {	LAST->Next = el;
		LAST = el;}
	}

	void sort(Hyb **node) {
		assert(typeid(FIRST->Data) == typeid(int));
		for (int j = 0; j < size((*node)); j++) {
			(*node) = FIRST;
			for (int i = 0; i < size((*node)); i++) {

				if ((*node)->Data > (*node)->Next->Data) { std::swap((*node)->Data, (*node)->Next->Data); }

				(*node) = (*node)->Next;
			}
		}

	}

	void print() {
		Hyb* OUT = FIRST;
		while (OUT != nullptr) {
	    std::cout << typeid(OUT->Data).name() << " " << OUT->Data << std::endl; 
	    OUT = OUT->Next;
		}	std::cout << std::endl; }

	void push_back(Hyb* node, const double data) { 
	
	}

	void push_front() { }
	void implace() { }
	void insert() { }

	int size(Hyb* node) {
		int sizes = 0;
		while (node->Next != nullptr) {
			sizes++;
			node = node->Next;
		}
		return sizes;
	}


};