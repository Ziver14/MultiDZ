#include<iostream>
#include "Tree.hpp"



int main() {
	setlocale(LC_ALL, "ru");
	int n;

	Tree AppleTree;
	AppleTree.fruit = "Apple";
	AppleTree.fruits_numbers = 5;
	AppleTree.fruits = 10;
	

	print_tree(AppleTree);
	std::cout << "\n\n";
	std::cout << "Все фрукты на дереве стоят-> " << full_price(AppleTree)<< "\n\n";
	
	std::cout << "\n\n";
	std::cout << "Сколько фруктов вы хотите сорвать -> ";
	std::cin >> n;
	std::cout <<"Оставщиеся фрукты стоят -> " << collect(AppleTree,n);
	return 0;
	
}




	


