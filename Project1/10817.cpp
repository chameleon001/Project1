/*


�� ���� A, B, C�� �־�����. �� ��, �� ��°�� ū ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� �� ���� A, B, C�� �������� ���еǾ� �־�����. (1 �� A, B, C �� 100)
���

�� ��°�� ū ������ ����Ѵ�.
���� �Է�

20 30 10

���� ���

20

���� �Է� 2

30 30 10

���� ��� 2

30

���� �Է� 3

40 40 40

���� ��� 3

40

���� �Է� 4

20 10 10

���� ��� 4

10

*/

#include<stdio.h>

int main() {

	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2) {

		if (num1 > num3) {

			if (num2 > num3) printf("%d", num2);

			else printf("%d", num3);

		}

		else printf("%d", num1);

	}

	else {

		if (num2 > num3) {

			if (num1 > num3) printf("%d", num1);

			else printf("%d", num3);

		}

		else printf("%d", num2);

	}

	return 0;

}

