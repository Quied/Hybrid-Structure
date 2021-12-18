#include "Header.h"
#include <iostream>
#include <typeinfo>


int main() {

	Hyb<int> Hybrid;
	Hybrid.add(Hybrid, 17);
	Hybrid.add(Hybrid, 16);
	Hybrid.add(Hybrid, 18);
	Hybrid.add(Hybrid, 17);
	
	Hybrid.print();

	std::cout << _TYPEINFO_(Hybrid).Data << std::endl;
	std::cout << typeid(Hybrid).name() << std::endl;
	

}
