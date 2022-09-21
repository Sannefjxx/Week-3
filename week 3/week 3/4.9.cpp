#include<stdio.h>;

int main(void) {

	int num;
	int counter;
	int adverage;
	int sum = 0;

	for (counter = 0; counter <= 100; counter++) {
		printf("To get the sum and adverage enter 0. \nEnter any number: ");
		scanf_s("%d", &num);
		sum += num;

		if (num == 0) {

			adverage = sum / counter;
			printf("The sum of the numbers enterd is: %d \n The adverage of the numbers enterd is: %d \n", sum, adverage);
			break;
		}
	}


}