#include <iostream>

// 함수 이름 sum_int  // snake_case 
// 함수 이름 sumInt // camelcase , pascal


int functionTest() {

	return 5;
}

int main() {
	int n; //5
	std::cout << "자연수를 입력해주세요.: ";
	std::cin >> n;

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		//sum = 0 + 1; // i=1
		//sum = 1 + 2; // i=2
		//sum = 3 + 3; // i=3
		//sum = sum + i;
		sum += i;
	}
	std::cout << "1부터 " << n << "까지의 합은 " << sum;









	return 0;
}