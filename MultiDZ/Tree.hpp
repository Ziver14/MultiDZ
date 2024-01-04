#pragma once
#include<string>
#include<iostream>


struct Tree {
	std::string fruit{"empty"};
	unsigned int fruits_numbers = 0;
	unsigned int fruits = 0;
};


void print_tree(const Tree& T);
int full_price(const Tree& T);
int collect(const Tree& T, int num);

