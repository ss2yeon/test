#include <iostream>

// �Լ� �̸� sum_int  // snake_case 
// �Լ� �̸� sumInt // camelcase , pascal


int functionTest() {

	return 5;
}

int main() {
	int n; //5
	std::cout << "�ڿ����� �Է����ּ���.: ";
	std::cin >> n;

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		//sum = 0 + 1; // i=1
		//sum = 1 + 2; // i=2
		//sum = 3 + 3; // i=3
		//sum = sum + i;
		sum += i;
	}
	std::cout << "1���� " << n << "������ ���� " << sum;









	return 0;
}