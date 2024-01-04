#include"Tree.hpp"



void print_tree(const Tree& T){
	std::cout << "������: " << T.fruit << std::endl ;
	std::cout << "����������� �������:" << T.fruits_numbers << std::endl;
	std::cout << "���� �� �����: " << T.fruits << std::endl;
}


int full_price(const Tree& T) {
	return T.fruits_numbers * T.fruits;
}



int collect(const Tree& T,int num) {
	if (T.fruits_numbers < num || num < 0)
		return 0;
	else
		return (T.fruits_numbers - num) * T.fruits;
}
	
		