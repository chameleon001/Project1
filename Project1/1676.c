/*
N!���� �ڿ������� ó�� 0�� �ƴ� ���ڰ� ���� ������ 0�� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� N�� �־�����. (0 �� N �� 500)
���

ù° �ٿ� ���� 0�� ������ ����Ѵ�.
���� �Է�

10

���� ���

2
*/

#include<stdio.h>
int main(){
    int a;
    int b;

    scanf("%d",&a);
    if(a==0){
        printf("1");
    }else{
        while(a/=5) b+=a;
        printf("%d",b);
    }
    return 0;
}
//5 ������ 0�� ������ �þ�°� �������� �ƴѰ�����..
//� ���ɿ��� Ʋ������....ã�ƶ����ߵǴµ�...
//
//�Ʒ��� �ҽ��� 2,5 �ΰ��� �̿��Ͽ� 0�� ������ ã�¸���̴�..

/*
#include <iostream>
#include <cstdio>
 
#define min(a,b)(a < b ? a : b)
 
using namespace std;
 
int main()
{
    int n, tmp;
    scanf("%d", &n);
 
    int two = 0, five = 0;
    for (int i = 1; i <= n; i++)
    {
        tmp = i;
        while (tmp)
        {
            if (tmp % 2 == 0)
            {
                two++;
                tmp /= 2;
            }
            else
                break;
        }
 
        tmp = i;
        while (tmp)
        {
            if (tmp % 5 == 0)
            {
                five++;
                tmp /= 5;
            }
            else
                break;
        }
    }
 
    printf("%d",min(two, five));
 
    return 0;
}


��ó: http://www.crocus.co.kr/391 [Crocus]
 */