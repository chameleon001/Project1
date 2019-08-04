//병합정렬(Merge Sort) 혹은 힙 정렬(Heap Sort)을 사용해 봅니다
/*
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
입력

첫째 줄에 수의 개수 N(1<=N<=1,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 절대값이 1,000,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
출력

첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
예제 입력

5
5
4
3
2
1

예제 출력

1
2
3
4
5

*/
#include <stdio.h>

#include <string.h>

void merge(int *base, int n);


int num[1000000];


int main()

{// merge

	int N;

	scanf("%d", &N);

	for (int i = 0; i < N; ++i)

		scanf("%d", &num[i]);

	merge(num, N);

	for (int i = 0; i < N; ++i)

		printf("%d\n", num[i]);

}


void merge(int *base, int n)

{

	int left = n / 2, right = n - left, l = 0, r = left, i = 0, *copy;

	if (n < 2) return;

	merge(base, left);

	merge(base + left, right);

	copy = (int *)malloc(sizeof(int)*n);

	memcpy(copy, base, sizeof(int)*n);

	while ((l < left) && (r < n))

	{

		if (copy[l] <= copy[r])

			base[i] = copy[l++];

		else

			base[i] = copy[r++];

		++i;

	}

	while (l < left)

		base[i++] = copy[l++];

	while (r < n)

		base[i++] = copy[r++];

	free(copy);

}


