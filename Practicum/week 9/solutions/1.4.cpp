#include <iostream>

using namespace std;

int copy(char to[], char from[]) {
	if (strlen(to) < strlen(from)) {
		return -1;
	}
	for (int i = 0; i < strlen(from); i++) {
		to[i] = from[i];
	}
	to[strlen(from)] = '\0';
	return 0;
}

int main() {
	char from[20];
	char to[8] = "bruised";
	cin >> from;
	copy(to, from);
	cout << to;
	return 0;
}