/*

"OOXXOXXOOO"�� ���� OX������ ����� �ִ�. O�� ������ ���� ���̰�, 
X�� ������ Ʋ�� ���̴�. ������ ���� ��� �� ������ ������ 
�� �������� ���ӵ� O�� ������ �ȴ�. ���� ���, 10�� ������ ������ 3�� �ȴ�.

"OOXXOXXOOO"�� ������ 1+2+0+0+1+0+0+1+2+3 = 10���̴�.

OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.



ù° �ٿ� �׽�Ʈ ���̽��� ������ �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, ���̰� 0���� ũ�� 80���� ���� ���ڿ��� �־�����. ���ڿ��� O�� X������ �̷���� �ִ�.
���

�� �׽�Ʈ ���̽����� ������ ����Ѵ�.
���� �Է�

5
OOXXOXXOOO
OOXXOOXXOO
OXOXOXOXOXOXOX
OOOOOOOOOO
OOOOXOOOOXOOOOX

���� ���

10
9
7
55
30

*/

#include<stdio.h>
#include<string.h>
int abc(int number) {
    char a[1000];
    int c = 0;
    int sum = 0;
    int sumsum = 1;
    for (int i = 0; i < number; i++) {
        scanf("%s", a);
        c = strlen(a);
        for (int j = 0; j < c; j++) {
            if (a[j] == 'o') {
                sum += sumsum;
                sumsum++;
            }
            else {
                sumsum = 1;
            }
        }
        printf("%d \n", sum);
    }
}



int main() {
    int a = 0;
    scanf("%d", &a);

    abc(a);
}