
#include <iostream>

// Program to swap 2 numbers using reference variables

void swapRef(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int x, y;
	std::cout << "Enter two integers: ";
	if (!(std::cin >> x >> y)) return 0;

	std::cout << "Before swap: x = " << x << ", y = " << y << '\n';
	swapRef(x, y);
	std::cout << "After swap:  x = " << x << ", y = " << y << '\n';

	return 0;
}
 