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
	

	friend std::ostream& operator<< (std::ostream& out, const Hyb & node) {
		out << "Begin: " << _TYPEINFO_(node).FIRST->Data; std::cout << std::endl;
		out << "Last: " << _TYPEINFO_(node).LAST->Data; std::cout << std::endl;
		out << "Type: " << typeid(node).name();
		return out;
	}


public:
	Hyb* FIRST = nullptr;
	Hyb* LAST = nullptr;

	void add(Hyb node, const D data) {
		Hyb* el = new Hyb(data);
		if (FIRST == NULL) {
			FIRST = el;
			LAST = el;
			return;	}
		else {	LAST->Next = el;
		LAST = el;}
	}

	void sort() {
		for (int j = 0; j < size(); j++) {
			Hyb* el = FIRST;
			for (int i = 0; i < size(); i++) {
				if (el->Next->Data < el->Data) { std::swap(el->Next->Data, el->Data); }
				el = el->Next;
			}
		}
	}

	void print() {
		Hyb* OUT = FIRST;
		while (OUT != nullptr) {
	    std::cout << typeid(OUT->Data).name() << " " << OUT->Data << std::endl; 
	    OUT = OUT->Next;
		}	std::cout << std::endl; }

	void push_back(Hyb node, const D data) { 
		Hyb* el = new Hyb(data);
		if (LAST != nullptr) { LAST->Next = el; LAST = el; }
		else { LAST = el; FIRST = el; }
	}

	void push_front(Hyb node, const D data) { 
		Hyb* el = new Hyb(data);
		if (FIRST != nullptr) { el->Next = FIRST; FIRST = el; }
		else { FIRST = el; LAST = el; }
	}

	void pop_front(Hyb node){
		Hyb* el = FIRST;
		FIRST = FIRST->Next;
		delete el;

	}


	void pop_back(){ }
	void emplace() { }
	void push_front(Hyb node, const D data, int Amount) { }
	void push_back(Hyb node, const D data, int Amount) { }


	void insert(Hyb node, const D data) {
		Hyb* el = new Hyb(data);
		Hyb* In = FIRST;
		for (int i = 0; i < size() / 2; i++) In = In->Next;
		Hyb* Save = In;
	}

	int size() {
		int sizes = 0; Hyb* el = FIRST;
		while (el->Next != nullptr) {
			sizes++;
			el = el->Next;
		}
		return sizes;
	}


};