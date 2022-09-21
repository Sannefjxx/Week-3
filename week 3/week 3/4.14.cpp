#include<stdio.h>;

int main(void) {

	int n;
	int a;
	int b;
	int c;
	int d;
	int e;
	int sum;
	a = 1;
	b = 2;
	c = 3;
	d = 4;
	e = 5;

	n = 0;

	printf("n\tn!\n");

	while (n <= 5) {
		n++;
		if (n == 1) {
			sum = n;
			printf("%d\t%d\n", n, sum);
			n++;
		}
		if (n == 2) {
			sum = a * b;
			printf("%d\t%d\n", n, sum);
			n++;
		}
		if (n == 3) {
			sum = a * b * c;
			printf("%d\t%d\n", n, sum);
			n++;
		}
		if (n == 4) {
			sum = a * b * c * d;
			printf("%d\t%d\n", n, sum);
			n++;
		}
		if (n == 5) {
			sum = a * b * c * d * e;
			printf("%d\t%d\n", n, sum);
			n++;
		}
		break;
	}
	


}