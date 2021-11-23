#include <iostream>

bool isEven(int n) {
	return n % 2 == 0;
}

unsigned countOfEvens(int a, int b) {
	unsigned count = 0;
	for(int i = a; i <= b; i++) {
		if(isEven(i)) {
			count++;
		}
	}

	return count;
}

int main() {
	int a, b;
	std::cin >> a >> b;
	try {
		if(a > b) {
			throw "Invalid interval!";
		} 
	} catch (const char* exception) {
		std::cout << exception << std::endl;
		return 0;
	}

	unsigned countOfEven = countOfEvens(a, b);
	std::cout << "Count of even: " << countOfEven << std::endl;
	return 0;
}