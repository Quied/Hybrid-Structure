#include "Header.h"
#include <iostream>
#include <typeinfo>


int main() {

	Hyb<double> Hybrid;
	Hybrid.add(Hybrid, 7777);
	Hybrid.add(Hybrid, 16);
	Hybrid.add(Hybrid, 18);
	Hybrid.add(Hybrid, 17);
	Hybrid.push_back(Hybrid, 999);
	Hybrid.push_front(Hybrid, 777);
	Hybrid.push_back(Hybrid, 17);
	Hybrid.push_front(Hybrid, 17);

	Hybrid.print();

	std::cout << Hybrid; std::cout << std::endl;

	

}
