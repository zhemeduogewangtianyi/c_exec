#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;
	int c = Add(a,b);
	printf("%d\n", c);
	return 0;
}

int Add(int a,int b) {
	int c = a + b;
	return c;
}