#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int x, b = 1;
int isPrime(int);

int main() {
	printf("Enter a Nummber : ");
	scanf("%d", &x);
	b = isPrime(x);
	//	printf("%d",b);
	if (b == 1) {
		printf("%d is prime", x);
	}
	else {
		printf("%d is not prime", x);
	}
	return 0;
}

int isPrime(int x) {
	if (x > 1) {
		for (int i = 2; i <= sqrt(x); i++) {
			if (x % i == 0) {
				b = 0;
				break;
			}
			else {
				b = 1;
			}
		}
	}
	else {
		b = 0;
	}
	return b;
}