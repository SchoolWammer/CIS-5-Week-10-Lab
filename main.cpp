#include <iostream>

// Lab 10 — Joshua Van Brunt
// CIS 5 Week 10 · References & pointers

void swap_values(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int x = 3, y = 7;
	std::cout << "Before: " << x << " " << y << "\n";
	swap_values(x, y);
	std::cout << "After: " << x << " " << y << "\n";
	int* p = &x;
	std::cout << "X: " << *p << "\n";
	return 0;
}