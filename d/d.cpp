#include <algorithm>
#include <iostream>
#include <string>
#include <sstream>

int str_to_num(std::string str) {
	std::stringstream ss;
	for (auto it = str.begin(); it != str.end(); ++it) {
		if (*it == '.') {
			str.erase(it);
		}
	}
	ss << str;
	int aux;
	ss >> aux;
	return aux;
}

std::string num_to_str(int num) {
	std::stringstream ss;
	ss << num;
	std::string aux;
	ss >> aux;

	for (num = aux.size() - 3; num > 0; num -= 3) {
		aux.insert(num, 1, '.');
	}
	return aux;
}

int main() {
	int casos;
	std::cin >> casos;

	while (casos) {
		int acc = 0, acc_f = 0, acc_c = 0;

		for (int i = 0; i < casos; ++i) {
			std::string cidade, favor, contra;
			std::cin >> cidade >> favor >> contra;

			int f = str_to_num(favor), c = str_to_num(contra);
			acc_f += f;
			acc_c += c;
			acc += f + c;
		}

		std::cout << num_to_str(acc) << ' ' << num_to_str(acc_f) << ' ' << num_to_str(acc_c) << std::endl;

		std::cin >> casos;
	}

	return 0;
}
