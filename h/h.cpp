#include <iostream>

int main() {
	int c, a, b;
	std::cin >> c >> a >> b;

	while (c != 0 || a != 0 || b != 0) {
		std::cout << a * c << ' ' << b * c << std::endl;
		std::cin >> c >> a >> b;
	}

	return 0;
}
