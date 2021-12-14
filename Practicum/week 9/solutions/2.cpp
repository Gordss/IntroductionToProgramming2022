#include <iostream>

using namespace std;

bool isSmallLetter(char c) {
	return c >= 'a' && c <= 'z';
}

int main() {
	char str[20];
	cin.getline(str, 20);
	int length = strlen(str);
	for (int i = 0; i < length; i++) {
		if (isSmallLetter(str[i])) {
			str[i] = str[i] - 32;
		}
	}
	cout << str;
	return 0;
}