int isPrime(int number) {
	int isPrime = true;
	for (int i = 2; i <= number - 1; i++) {
		if (number % i == 0) {
			isPrime = false;
			break;
		}
	}
	return isPrime;
}

