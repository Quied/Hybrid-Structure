#include "Header.h"
#include <iostream>
#include <typeinfo>
#include <vector>

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
    Hybrid.pop_front(Hybrid);
	Hybrid.sort();


	Hybrid.print();
	std::cout << Hybrid; std::cout << std::endl;

	std::vector<void*> Vec;
	Vec.push_back(&Hybrid);
	
	void* ptr = &Hybrid.FIRST;
//	std::cout << std::type_info(ptr).name();
	std::cout << "-> " << static_cast<Hyb<double>*>(Vec[0])->Data;
	


}
