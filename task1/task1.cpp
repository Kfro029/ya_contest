// task1.cpp: определяет точку входа для приложения.
//
#include <iostream>
#include <vector>




int main()
{
	int n;
	std::cin >> n;

	bool iter = 1; // возможно ли заполнение чана
	int first, k_prev;
	std::cin >> first;

	k_prev = first;

	for (std::size_t i = 1; i < n; i++) {
		int k;
		std::cin >> k;
		if(k < k_prev){ 
			k_prev = k;
			iter = 0;
			break;
		}
		k_prev = k;

	}

	if (iter) { std::cout << k_prev - first; }
	else { std::cout << -1; }



	;
	return 0;
}
