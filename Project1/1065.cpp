/*

� ���� ���� X�� �ڸ����� ���������� �̷�ٸ�, �� ���� �Ѽ���� �Ѵ�.
���������� ���ӵ� �� ���� ���� ���̰� ������ ������ ���Ѵ�.N�� �־����� ��, 1���� ũ�ų� ����,
N���� �۰ų� ���� �Ѽ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� 1, 000���� �۰ų� ���� �ڿ��� N�� �־�����.
���

ù° �ٿ� 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����Ѵ�.
���� �Է�

110

���� ���

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