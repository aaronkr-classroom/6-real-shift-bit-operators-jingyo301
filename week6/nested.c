// nested.c
#include <stdio.h>

int main(void) {
	int step, i;

	for (step = 1; step <= 9; step++) { // �ܺ� �ݺ���
		printf("\n=== Group %d ===\n", step);
		for (i = 1; i <= 9; i++) { // ���� �ݺ���
			printf("%d * %d = %d\n", step, i, step * i);
		}
	}

	getch();
	return 0;
}