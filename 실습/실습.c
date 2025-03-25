#include <time.h>
#include <stdio.h>

/*int main() {
	int i;
	double start, end;
	// for 루프 시작 시간
	start = (double)clock() / CLOCKS_PER_SEC;

	// FOR 루프 100000000번 돌아보기
	int sum = 0;
	for (i = 0; i < 100000000; i++) {
		sum++;
	}
	// for 루프 끝난 시간
	end = (((double)clock()) / CLOCKS_PER_SEC);
	printf("프로그램 수행 시간: %lf\n", (end - start));
}


int Fibonacci(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n < -1) {
		return 1;
	}
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main(void) {
	int n;
	int i;

	printf("몇번째까지 피보나치 수열을 구할까요?: ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		printf("%d번째 수 ", i);
		printf("%d\n", Fibonacci(i));
	}
	return 0;
}
*/