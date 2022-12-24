#include <iostream>
#include <string>
#include <vector>

int main() {
	std::string word;
	int answer = 0;
	int temp_1 = 0;
	int temp_2 = 0;
	std::cin >> word;

	std::vector <char> letter(5);
	letter[0] = 'a';
	letter[1] = 'o';
	letter[2] = 'u';
	letter[3] = 'i';
	letter[4] = 'e';

	for (int i = 1; i < word.size(); i++) {
		for (int k = 0; k < 5; k++) {
			if (word[i] == letter[k]) {
				temp_1 = 1;
			}
			if (word[i - 1] == letter[k]) {
				temp_2 = 1;
			}
		}
		if (temp_1 != 1 and temp_2 != 1 and word[i - 1] != 'n') {
			answer = 10;
		}
		temp_1 = 0;
		temp_2 = 0;
	}

	if (answer == 10) {
		std::cout << "NO";
	}
	else {
		std::cout << "YES";
	}
	return 0;
}
