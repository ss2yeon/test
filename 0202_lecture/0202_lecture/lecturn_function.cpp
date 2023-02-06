#include <iostream>
#include <iomanip>

int functionTestInt();
double functionTestDouble();
std::string functionStr();
void functionTestVoid(int, int, std::string);
int functionTestSum(int, int, std::string);
int functionTestSum(int, int);

int main() {
	double numD = 3.33333;
	std::cout << std::setprecision(3) << numD;

	functionTestVoid(2, 3, "+");
	functionTestVoid(3, 4, "+");

	int result = functionTestSum(2, 3, "+"); 
	int result2 = functionTestSum(result, 4, "+");

	std::cout << result + result2 << std::endl;
	

	int num = functionTestSum(2, 3); // 5
	//num = 5;
	std::cout << num << std::endl;
	std::cout << functionTestSum(4, 7);

	return 0;
}

int functionTestSum(int n1, int n2) {
	return n1 + n2;
}

int functionTestSum(int n1, int n2, std::string op) {
	int result = 0;
	if (op == "+") {
		result = n1 + n2;
	}
	else if (op == "-") {
		result = n1 - n2;
	}

	return result;
}

void functionTestVoid(int n1, int n2, std::string op) {
	int result = 0;
	if (op == "+") {
		result = n1 + n2;
	}
	else if (op == "-") {
		result = n1 - n2;
	}

	std::cout << result << std::endl;
}

std::string functionStr() {
	std::cout << "�ȳ��ϼ���";
	std::cout << "�ȳ��ϼ���";
	std::cout << "�ȳ��ϼ���";
	std::cout << "�ȳ��ϼ���";

	return "hello";
}

double functionTestDouble() {
	return 5.4;
}

int functionTestInt() {
	return 5;
}
