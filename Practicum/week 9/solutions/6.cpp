#include <iostream>

using namespace std;

bool isSmallLetter(char c) {
	return c >= 'a' && c <= 'z';
}

void extractSmallLetters(const char* str, int n, char* result) {
	int index = 0;
	for (int i = 0; i < n; i++) {
		if (isSmallLetter(str[i])) {
			result[index] = str[i];
			index++;
		}
	}
	result[index] = '\0';
}

bool isCapitalLetter(char c) {
	return c >= 'A' && c <= 'Z';
}

void extractCapitalLetters(const char* str, int n, char* result) {
	int index = 0;
	for (int i = 0; i < n; i++) {
		if (isCapitalLetter(str[i])) {
			result[index] = str[i];
			index++;
		}
	}
	result[index] = '\0';
}

bool check(const char* str, int n) {
	char* s = new char[strlen(str) + 1];
	extractSmallLetters(str, n, s);

	char* S = new char[strlen(str) + 1];
	extractCapitalLetters(str, n, S);

	if (strlen(s) != strlen(S)) {
		return false;
	}

	for (int i = 0; i < strlen(s); i++) {
		if (s[i] - 32 != S[i]) {
			return false;
		}
	}

	return true;
}

int main() {
	const char* X = "abABcC";
	bool flagX = check(X, strlen(X));
	if (flagX) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	cout << endl;

	const char* Y = "aBACbc";
	bool flagY = check(Y, strlen(Y));
	if (flagY) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}