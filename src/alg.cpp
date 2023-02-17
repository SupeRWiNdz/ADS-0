// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int x;
	a > b ? x = a : x = b;
	for (x; x>0; --x) {
		if ((a % x == 0) && (b % x == 0)) {
			return (x);
		}
	}
}
