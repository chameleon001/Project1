/*
2675

���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� T�� ���� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�ٽ� �������ڸ�, ù ��° ���ڸ� R�� �ݺ��ϰ�, �� ��° ���ڸ� R�� �ݺ��ϴ� ������ T�� ����� �ȴ�. S���� QR Code "alphanumeric" ���ڸ� ����ִ�.

QR Code "alphanumeric" ���ڴ� 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ$%*+-./: �̴�.
�Է�

ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1 <= T <= 1,000)�� �־�����. �� �׽�Ʈ ���̽���  �ݺ� Ƚ�� R(1 <= R <= 8), ���ڿ� S�� �������� ���еǾ� �־�����. S�� ���̴� ��� 1�̸�, 20���ڸ� ���� �ʴ´�. 
���

�� �׽�Ʈ ���̽��� ���� T�� ����Ѵ�.
���� �Է�

2
3 ABC
5 /HTP

���� ���

AAABBBCCC
/////HHHHHTTTTTPPPPP

*/

#include <stdio.h>
#include <string.h>
int main(){
	int t, i, j, k, n, length;
	char str[30] = " ";

	scanf("%d", &t);
	for(i = 0; i < t; i++){
		scanf("%d%s", &n, str);
		length = strlen(str);
		for(j = 0; j < length; j++){
			for(k = 0; k < n; k++){
				putchar(str[j]);
			}
		}
		puts("");
	}
}

