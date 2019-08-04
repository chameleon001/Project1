//��������(Merge Sort) Ȥ�� �� ����(Heap Sort)�� ����� ���ϴ�
/*
N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� ���� ���� N(1<=N<=1,000,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ���ڰ� �־�����. �� ���� ���밪�� 1,000,000���� �۰ų� ���� �����̴�. ���� �ߺ����� �ʴ´�.
���

ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.
���� �Է�

5
5
4
3
2
1

���� ���

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


