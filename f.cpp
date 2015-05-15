#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
	int e;
	std::cin >> e;

	while (e != 0) {
		int fila[e]{};

		int furoes;
		std::cin >> furoes;

		while (furoes --> 0) {
			int pos;
			std::cin >> pos;
			fila[pos] += 1;
		}

		int acc = fila[0];
		for (int i = 1; i < e; ++i) {
			std::cout << acc << ' ';
			acc += fila[i];
		}
		std::cout << acc << std::endl;
		std::cin >> e;
	}

	return 0;
}
