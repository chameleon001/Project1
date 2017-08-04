/*
오늘은 2007년 1월 1일 월요일이다.그렇다면 2007년 x월 y일은 무슨 요일일까 ? 이를 알아내는 프로그램을 작성하시오.
입력

첫째 줄에 빈 칸을 사이에 두고 x(1≤x≤12)와 y(1≤y≤31)이 주어진다.참고로 2007년에는 1, 3, 5, 7, 8, 10, 12월은 31일까지, 4, 6, 9, 11월은 30일까지, 2월은 28일까지 있다.
출력

첫째 줄에 x월 y일이 무슨 요일인지에 따라 SUN, MON, TUE, WED, THU, FRI, SAT중 하나를 출력한다.
예제 입력

1 1

예제 출력

MON

*/
#include <stdio.h>

int main() {
	int m, d, i;
	scanf("%d %d", &m, &d);

	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int m_d = 0;
	int date = 0;

	for (i = 0; i<m - 1; i++)
	{
		m_d = m_d + month[i];
	}

	m_d = m_d + d - 1;
	date = m_d % 7;

	if (date == 0) {
		printf("MON");
	}
	else if (date == 1) {
		printf("TUE");
	}
	else if (date == 2) {
		printf("WED");
	}
	else if (date == 3) {
		printf("THU");
	}
	else if (date == 4) {
		printf("FRI");
	}
	else if (date == 5) {
		printf("SAT");
	}
	else if (date == 6) {
		printf("SUN");
	}
}