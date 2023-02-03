#include <iostream>
int main() {

	std::string friends[2] = { "홍길동", "성춘향" };
	std::cout << friends[0];

	double nums[3] = { 1.5, 2.5, 3.5 };

	std::string fruit[2][3][2] = {
		{ { "",""} , {"",""}, {"",""} },
		{ { "",""} , {"",""}, {"",""} }
	};

	// friends = { "홍길동", "성춘향" }
	return 0;
}