#include <iostream>
int main() {

	std::string friends[2] = { "È«±æµ¿", "¼ºÃáÇâ" };
	std::cout << friends[0];

	double nums[3] = { 1.5, 2.5, 3.5 };

	std::string fruit[2][3][2] = {
		{ { "",""} , {"",""}, {"",""} },
		{ { "",""} , {"",""}, {"",""} }
	};

	// friends = { "È«±æµ¿", "¼ºÃáÇâ" }
	return 0;
}