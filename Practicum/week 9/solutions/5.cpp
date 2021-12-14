#include <iostream>

using namespace std;

int main() {
	char str[1024];
	cin.getline(str, 1024, '!');
	int histogram[128];
	for (int i = 0; i < 128; i++) {
		histogram[i] = 0;
	}
	for (int i = 0; i < 128; i++) {
		for (int j = 0; j < strlen(str); j++) {
			if (str[j] == i) {
				histogram[i]++;
			}
		}
	}
	for (int i = 0; i < 128; i++) {
		cout << i << "->" << histogram[i] << endl;
	}
	return 0;
}