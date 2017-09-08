/*

어떤 양의 정수 X의 자리수가 등차수열을 이룬다면, 그 수를 한수라고 한다.
등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다.N이 주어졌을 때, 1보다 크거나 같고,
N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오.
입력

첫째 줄에 1, 000보다 작거나 같은 자연수 N이 주어진다.
출력

첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다.
예제 입력

110

예제 출력

99
*/
#include<stdio.h>
int get_hansoo(int n);

int main(void)
{
	int input;
	scanf("%d", &input);
	printf("%d\n", get_hansoo(input));
}

int get_hansoo(int n)
{
	if (n < 100) return n;
	else {
		int i, hc = 99;
		for (i = 100; i <= n; ++i)
		{
			int a[3]; // 1 , 10 , 100

			if (i == 1000) break;

			a[0] = (i % 1000) / 100;
			a[1] = (i % 100) / 10;
			a[2] = i % 10;

			if ((a[0] == a[1] && a[0] == a[2]) || a[0] - a[1] == a[1] - a[2]) hc++;
		}
		return hc;
	}
}