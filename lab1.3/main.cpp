//Священко Станіслав Володимирочич, група N 123, Лабораторна робота 1.3
#include <iostream>
#include <locale>

int main() {
	int a1 = 18;//  Опис змінних
	int inverta1 = ~18; // Виконання порозрядного заперечення
	std::cout << inverta1 << std::endl;// Виведення результату

	int a2 = 89, b2 = 122; //  Опис змінних
	int a2andb2 = a2 & b2; // Порозрядне “ І “
	std::cout << a2andb2 << std::endl;// Виведення результату

	int a3 = 134, b3 = 65;//  Опис змінних
	int a3orb3 = a3 | b3; // Порозрядне “АБО ”
	std::cout << a3orb3 << std::endl;// Виведення результату

	int a4 = 34, b4 = 78;//  Опис змінних
	int a4xorb4 = a4 | b4; // Порозрядне “АБО ”, яке виключає
	std::cout << a4xorb4 << std::endl;// Виведення результату

	int a5 = 907, b5 = 1;//  Опис змінних
	int LeftShift = a5 << b5; // Порозрядний зсув ліворуч
	std::cout << LeftShift << std::endl;// Виведення результату

	int a6 = -95, b6 = 1;//  Опис змінних
	int RightShift = a6 >> b6; // Порозрядний зсув праворуч
	std::cout << RightShift << std::endl;// Виведення результату
	return 0;
}
