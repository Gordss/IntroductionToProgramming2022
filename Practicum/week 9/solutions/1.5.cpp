#include <iostream>

using namespace std;

int cmp(char s1[], char s2[]) {
	int min = strlen(s1) < strlen(s2) ? strlen(s1) : strlen(s2);
	for (int i = 0; i < min; i++) {
		if (s1[i] == s2[i]) {
			continue;
		}
		if (s1[i] < s2[i]) {
			return -1;
		}
		if (s1[1] > s2[i]) {
			return 1;
		}
	}
	return 0;
}

int main() {
	char a[5] = "abc";
	char b[5] = "abd";
	cout << cmp(a, b);
	return 0;
}