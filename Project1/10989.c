/*


N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� ���� ���� N(1 �� N �� 10,000,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ���ڰ� �־�����. �� ���� 10,000���� �۰ų� ���� �ڿ����̴�.
���

ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.
���� �Է�

10
5
2
3
1
4
2
3
5
1
7

���� ���

1
1
2
2
3
3
4
5
5
7*/
#include<cstdio>
int a[10001], n, x;
int main() {
    for (scanf("%d", &n); n--;) scanf("%d", &x), a[x]++;
    for (int i = 1; i <= 10000/*1e4*/; i++) while (a[i]--) printf("%d\n", i);
    return 0;
}