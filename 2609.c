/*


�� ���� �ڿ����� �Է¹޾� �ִ� ������� �ּ� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ��� �� ���� �ڿ����� �־�����. �� ���� 10,000������ �ڿ����̸� ���̿� �� ĭ�� ������ �־�����.
���

ù° �ٿ��� �Է����� �־��� �� ���� �ִ�������,��° �ٿ��� �Է����� �־��� �� ���� �ּ� ������� ����Ѵ�.
���� �Է� 1 ����

24 18

���� ��� 1 ����

6
72

 *
 *
 */

#include <iostream>
using namespace std;
int getGcd(int m, int n) {
    return n ? getGcd(n, m % n):m;
}
int getGcm(int m, int n, int gcd) {
    return m * n / gcd;
}
int main()
{
    int m, n, gcd, gcm;
    
    scanf("%d %d", &m, &n);
    
    if (m < n) {
        int temp = m;
        m = n;
        n = temp;
    }
    
    printf("%d\n%d", getGcd(m,n), getGcm(m,n,getGcd(m,n)));

    
    return 0;
}

