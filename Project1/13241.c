/*

����

���� B�� 0���� ū ������ N�� ���� ���� A�� ���� �� �ִٸ�, A�� B�� ����̴�.

��:

    10�� 5�� ����̴� (5*2 = 10)
    10�� 10�� ����̴�(10*1 = 10)
    6�� 1�� ����̴�(1*6 = 6)
    20�� 1, 2, 4,5,10,20�� ����̴�.

�ٸ� ��:

    2�� 5�� �ּҰ������ 10�̰�, �� ������ 2�� 5���� ���� ������� ���� �����̴�.
    10�� 20�� �ּҰ������ 20�̴�.
    5�� 3�� �ּҰ������ 15�̴�.

����� �� ���� ���Ͽ� �ּҰ������ ���ϴ� ���α׷��� �ۼ� �ϴ� ���� ��ǥ�̴�.
�Է�

�� �ٿ� �� ���� A�� B�� �������� �и��Ǿ� �־�����.

50%�� �Է� �� A�� B�� 1000(103)���� �۴�. �ٸ� 50%�� �Է��� 1000���� ũ�� 100000000(108)���� �۴�.

�߰�: ū �� �Է¿� ���Ͽ� ������ 64��Ʈ ������ �����Ͻÿ�. C/C++������ long long int�� ����ϰ�, Java������ long�� ����Ͻÿ�.
���

A�� B�� �ּҰ������ �� �ٿ� ����Ѵ�.
���� �Է� 1 ����

1 1

���� ��� 1 ����

1

���� �Է� 2 ����

3 5

���� ��� 2 ����

15

���� �Է� 3 ����

1 123

���� ��� 3 ����

123

���� �Է� 4 ����

121 199

���� ��� 4 ����

24079

 *
 *
 */

#include <iostream>
using namespace std;
long long GCD(long long a, long long b)//��Ŭ���� ȣ���� �̿�
{
    return b?GCD(b,a%b) : a;
    //b =0 -> a  b>0 GCD
}
int main() {
    long long a, b,gcd;
    cin >> a >> b;
    gcd = GCD(a, b);
    cout << gcd * (a / gcd) * (b / gcd )<< '\n';
}

