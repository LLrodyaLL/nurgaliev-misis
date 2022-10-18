#include <iostream>
#include <vector>

int main() {
	int n;
	std::cin >> n;
	std::vector <int> c(n+1);
	for (int i = 1; i <= n; ++i) {
		int p;
		std::cin>>p;
		c[p] = i;
	}
	for (int j = 1; j <= n; ++j) {
		std::cout<<c[j]<<" ";
	}
}
