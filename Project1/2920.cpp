/*


�������� c d e f g a b C, �� 8�� ������ �̷�����ִ�. �� �������� 8�� ���� ������ ���� ���ڷ� �ٲپ� ǥ���Ѵ�. c�� 1��, d�� 2��, ..., C�� 8�� �ٲ۴�.

1���� 8���� ���ʴ�� �����Ѵٸ� ascending, 8���� 1���� ���ʴ�� �����Ѵٸ� descending, �� �� �ƴ϶�� mixed �̴�.

������ ������ �־����� ��, �̰��� ascending����, descending����, �ƴϸ� mixed���� �Ǻ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� 8�� ���ڰ� �־�����. �� ���ڴ� ���� ������ ������ ���̸�, 1���� 8���� ���ڰ� �� ���� �����Ѵ�.
���

ù° �ٿ� ascending, descending, mixed �� �ϳ��� ����Ѵ�.
���� �Է�

1 2 3 4 5 6 7 8

���� ���

ascending
*/

#include<stdio.h>

int main() {

    int a[7];
    int b = 0;
    int c = 0;
    enum week { ascending, descending, mixed };
    for (int i = 0; i < 8; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 8; i++) {
        if (a[i] == i + 1) {
            b++;
        }
        else if (a[7 - i] == i + 1) {
            c++;
        }
    }
    if (b == 8) {
        printf("ascending");
    }
    else if (c == 8) {
        printf("descending");
    }
    else {
        printf("mixed");
    }
}