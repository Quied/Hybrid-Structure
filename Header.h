#pragma once
#include <iostream>
#include <cassert>
#include <typeinfo>


template <class D>
class Node {
public: 

	D Data;
	Node* Next = nullptr;

	Node(D _Data) : Data(_Data), Next(nullptr){}
	Node(Node const &copy) : Data(copy.Data), Next(copy.Next){}

};

template <typename D>
class Hyb {
private:

	Node<D>* FIRST = nullptr;
	Node<D>* LAST = nullptr;

	
  friend std::ostream& operator<< (std::ostream& out, const Node<D>& node) {
	while (node.Next != nullptr) {
		out << "Data: " << node.Data << std::endl;
	}
	return out;
	}


public:
	void add(Node<D> *&node, D data) {
		if (!node) {
			Node* el = new Node(data); 
			FIRST = el;
			LAST = el;
			return;
		}
		else {
			Node* el = new Node(data);	LAST->Next = el;
		}
	}

	void sort(Node<D> **node) {
		assert(typeid(FIRST->Data) == typeid(int));
		std::cout << "Hello World";
		for (int j = 0; j < size(); j++) {
			node = FIRST;
			for (int i = 0; i < size(); i++) {

				if (node->Data > node->Next->Data) { std::swap(node->Data, node->Next->Data); }

				node = node->Next;
			}
		}
	}

	void push_back(Node<D> *node, D data) { }
	void push_front() { }
	void implace() { }
	void insert() { }

	int size(Node<D> *node) {
		int sizes = 0;
		while (node->Next != nullptr) {
			sizes++;
			node = node->Next;
		}
		return sizes;
	}

};