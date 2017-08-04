/*


N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
입력

첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.
출력

입력으로 주어진 숫자 N개의 합을 출력한다.
예제 입력

1
1

예제 출력

1

예제 입력 2

5
54321

예제 출력 2

15
*/

#include <stdio.h>
int main(void) {
	char input[100] = { 0};
	int length, i, result = 0;
	scanf("%d", &length);
	scanf("%s", input);
	for (i = 0; i<length; i++) result += (input[i] - '0'); 
	printf("%d\n", result);
	return 0;
}
