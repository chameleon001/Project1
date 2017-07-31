//방법 1
#include <stdio.h>

int main() {

	int dp[41][2] = { 0 };

	int n = 0, t = 0;

	scanf("%d", &n);

	dp[0][0] = 1; dp[0][1] = 0;

	//0이 출력하는 0의 갯수 1, 1의 갯수 0

	dp[1][0] = 0; dp[1][1] = 1;

	//1이 출력하는 0의 갯수 0, 1의 갯수 1

	for (int i = 2; i<41; i++) {

		dp[i][0] = dp[i - 1][0] + dp[i - 2][0];

		dp[i][1] = dp[i - 1][1] + dp[i - 2][1];

		//2를 호출했을때 0과 1에서 나온 값을 더해서 저장

		//계산된 값을 중첩하여 더해 나감

	}

	for (int i = 0; i<n; i++) {

		scanf("%d", &t);

		printf("%d %d\n", dp[t][0], dp[t][1]);

	}

	return 0;

}


//방법2

/*
#include<stdio.h>
int zero = 0;
int one = 0;

int fibonacci(int n) {
	if (n == 0) {
		//printf("0");
		zero++;
		return 0;
	}
	else if (n == 1) {
	//	printf("1");
		one++;
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	int a = 0;
	int b = 0;
	scanf_s("%d", &b);
	for (int i = 0; i <b; i++) {
		scanf_s("%d", &a);
		fibonacci(a);
		printf("%d %d", zero, one);
		zero = one = 0;
	}

	//return 0;
}
*/
/*


다음 소스는 N번째 피보나치 함수를 구하는 함수이다.


int fibonacci(int n) {
if (n==0) {
printf("0");
return 0;
} else if (n==1) {
printf("1");
return 1;
} else {
return fibonacci(n‐1) + fibonacci(n‐2);
}
}

fibonacci(3)을 호출하면 다음과 같은 일이 일어난다.

fibonacci(3)은 fibonacci(2)와 fibonacci(1) (첫 번째 호출)을 호출한다.

fibonacci(2)는 fibonacci(1) (두 번째 호출)과 fibonacci(0)을 호출한다.

두 번째 호출한 fibonacci(1)은 1을 출력하고 1을 리턴한다.

fibonacci(0)은 0을 출력하고, 0을 리턴한다.

fibonacci(2)는 fibonacci(1)과 fibonacci(0)의 결과를 얻고, 1을 리턴한다.

첫 번째 호출한 fibonacci(1)은 1을 출력하고, 1을 리턴한다.

fibonacci(3)은 fibonacci(2)와 fibonacci(1)의 결과를 얻고, 2를 리턴한다.

이 때, 1은 2번 출력되고, 0은 1번 출력된다. N이 주어졌을 때, fibonacci(N)을 호출했을 때, 0과 1이 각각 몇 번 출력되는지 구하는 프로그램을 작성하시오.
입력

첫째 줄에 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스는 다음과 같이 구성되어있다.

첫째 줄에 N이 주어진다. N은 40보다 작거나 같은 자연수 또는 0이다.

*/