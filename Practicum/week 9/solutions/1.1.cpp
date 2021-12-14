#include <iostream>

using namespace std;

int len(char str[]) {
	int size = 0;
	while (str[size] != '\0') {
		size++;
	}
	return size;
}

int main() {
	char str[20];
	cin.getline(str, 20);
	cout << (len(str) == strlen(str));
	return 0;
}