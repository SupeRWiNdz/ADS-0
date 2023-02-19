// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
if (b % a == 0) return a;
if (a % b == 0) return b;
if (a > b) return gcd(a % b, b);
if (b > a) return gcd(b % a, a);
}
