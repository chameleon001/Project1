/*


���ĺ� �ҹ��ڿ� �빮�ڷθ� �̷���� ���̰� N�� �ܾ �־�����.

�� �ٿ� 10���ھ� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� �ܾ �־�����. �ܾ�� ���ĺ� �ҹ��ڿ� �빮�ڷθ� �̷���� ������, ���̴� 100�� ���� �ʴ´�. ���̰� 0�� �ܾ�� �־����� �ʴ´�.
���

�Է����� �־��� �ܾ �� ���� ��� �� �ٿ� �ϳ��� ����Ѵ�. �ܾ��� ���̰� 10�� ����� �ƴ� ��쿡�� ������ �ٿ��� 10�� ������ ���ڸ� ����� ���� �ִ�.
���� �Է�

BaekjoonOnlineJudge

���� ���

BaekjoonOn
lineJudge

���� �Է� 2

OneTwoThreeFourFiveSixSevenEightNineTen

���� ��� 2

OneTwoThre
eFourFiveS
ixSevenEig
htNineTen
*/

#include<stdio.h>
#include<string.h>
int main() {
	char a[100] = { 0 };

	scanf("%s", a);

	for (int i= 0; i < strlen(a); i++) { 
		printf("%c", a[i]); 
		if ((i + 1) % 10 == 0) 	printf("\n");
	}


}