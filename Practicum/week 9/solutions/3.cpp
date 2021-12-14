#include <iostream>

using namespace std;

void deleteIntervals(char s1[]) {
	char helper[100];
	int size = 0;
	for (int i = 0; i < strlen(s1); i++) {
		if (s1[i] == ' ' && s1[i+1] == ' ') {
			continue;
		} else {
			helper[size] = s1[i];
			size++;
		}
	}
	for (int i = 0; i < size; i++) {
		s1[i] = helper[i];
	}
	s1[size] = '\0';
}

int main() {
	char str[100];
	cin.getline(str, 100);
	deleteIntervals(str);
	cout << str;
	return 0;
}