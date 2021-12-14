#include <iostream>

using namespace std;

int main() {
	char first_word[100];
	char second_word[100];
	cin.getline(first_word, 100);
	cin.getline(second_word, 100);
	int max = (strlen(first_word) > strlen(second_word)) ? strlen(first_word) : strlen(second_word);
	cout << max;
	if (strlen(first_word) == strlen(second_word)) {
		char helper[3];
		for (int i = 0; i < 3; i++) {
			helper[i] = first_word[i];
		}
		for (int i = 0; i < 3; i++) {
			first_word[i] = second_word[i];
		}
		for (int i = 0; i < 3; i++) {
			second_word[i] = helper[i];
		}
	}
	if (max == strlen(first_word)) {
		for (int i = 0; i < 3; i++) {
			first_word[i] = second_word[i];
		}
		cout << first_word;
	}
	else {
		for (int i = 0; i < 3; i++) {
			second_word[i] = first_word[i];
		}
		cout << second_word;
	}
	return 0;
}