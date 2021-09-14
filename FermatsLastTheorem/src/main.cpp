#include <iostream>
#include <string>
//  x^n + y^n = z^n for n >= 3 and n, x, y, and z is a positive integer.
int main() {
	unsigned long n = 2;
	for (unsigned long x{ 1 }; x <= 10000; x++) {
		for (unsigned long y{ 1 }; y <= 10000; y++) {
			for (unsigned long z{ 1 }; z <= 10000; z++) {
				if (std::pow(x, n) + std::pow(y, n) == std::pow(z, n)) {
					std::cout << "Found (x, y, z, n): (" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ", " + std::to_string(n) + ")\n";
				}
			}
		}
	}
	return 0;
}