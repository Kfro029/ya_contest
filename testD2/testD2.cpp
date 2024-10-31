// teskD.cpp: определяет точку входа для приложения.
//

#include <iostream>
#include <vector>


void more_simple(std::vector<int>& vec, int a) {
	while (a != 1) {
		int b = 2;
		while(true){
			if ((a % b) == 0) {
				//std::cout << "a = " << a << "; b = " << b << std::endl;
				vec.push_back(b);
				a = a / b;
				break;
			}
			b++;
		}
	}
}

int NOD(int a, int b) {
	if (a == 0 || b == 0) { return a + b; }
	if (a > b) { return NOD(a - b, b); }
	else { return NOD(a, b - a); }


	
}

//using namespace std;

int main()
{
	int T;
	std::cin >> T;
	for (int i = 0; i < T; i++) {
		int a, b;
		int c = 0;
		std::cin >> a;
		std::cin >> b;
		std::vector<int> v1 = { 1 };
		std::vector<int> v2 = { 1 };
		more_simple(v1, a);
		more_simple(v2, b);
		int m = std::min(v1.size(), v2.size());
		// std::cout << "min = " << m << std::endl;
		// std::cout << "sizes: " << v1.size() << " " << v2.size() << std::endl;
		for (std::size_t j = 0; j < m; j--) {
			// std::cout << "here0" << std::endl;
			if (v1[v1.size() - 1- j] != v2[v2.size() - 1 - j]) {
				// std::cout << "here";
				std::cout << NOD(a, b) * std::max(v1[v1.size() - 1 - j], v2[v2.size() - 1 - j]) << std::endl;
				c = 1;
				break;
			}
		}
		if (!c) { std::cout << a << std::endl; }
	}
}
