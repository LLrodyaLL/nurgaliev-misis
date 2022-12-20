#include <iostream>
#include <cmath>

int main() {
	float x_start = 0.1;
	float x_end = 1.0;
	double eps = 0.0001;
	double step = 0.05;
	float summa = 0;
	int i = 1;

	std::cout << "x" << "      " << "summa" << std::endl;

	for (float x = x_start; x <= x_end; x += step) {
		float temp = 1;
		while (std::abs(temp) >= eps) {
			temp = std::pow(x, 2 * i + 1) * std::pow(-1, i + 1) / (4 * std::pow(i, 2) - 1);
			summa += temp;
			i++;
		}

		std::cout << x << "    " << summa << std::endl;
	}
}
