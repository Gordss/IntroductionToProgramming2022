#include <iostream>

using namespace std;


bool isLowercLet(char symbol) {
	return symbol >= 'a' && symbol <= 'z';
}

bool isCapLet(char symbol) {
	return symbol >= 'A' && symbol <= 'Z';
}

// equvalent of std::isalpha
bool isLetter(char symbol) {
	return isLowercLet(symbol) || isCapLet(symbol);
}

int main() {
	char a;
	std::cin >> a;
	std::cout << std::boolalpha << isLetter(a) << std::endl;
	std::cout << std::isalpha(a) << std::endl;

	return 0;
}
