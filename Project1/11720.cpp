/*


N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� ������ ���� N (1 �� N �� 100)�� �־�����. ��° �ٿ� ���� N���� ������� �־�����.
���

�Է����� �־��� ���� N���� ���� ����Ѵ�.
���� �Է�

1
1

���� ���

1

���� �Է� 2

5
54321

���� ��� 2

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
