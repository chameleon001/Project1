/*
소수&팰린드롬
시간 제한 	메모리 제한 	제출 	정답 	맞은 사람 	정답 비율
2 초 	128 MB 	1843 	426 	336 	31.520%
문제

어떤 수와 그 수의 숫자 순서를 뒤집은 수가 일치하는 수를 팰린드롬이라 부른다. 예를 들어 79,197과 324,423 등이 팰린드롬 수이다.

어떤 수 N (1 ≤ N ≤ 1,000,000)이 주어졌을 때, N보다 크거나 같고, 소수이면서 팰린드롬 수 중에서, 가장 작은 수를 구하는 프로그램을 작성하시오.
입력

첫째 줄에 N이 주어진다.
출력

첫째 줄에 조건을 만족하는 수를 출력한다.
예제 입력 1 복사

31

예제 출력 1 복사

101

 *
 */

/* 정수를 뒤집는 방법. 
 * 이 방법을 이용하였다.
#include <stdio.h>

int main()
{
    int a, r;

    scanf("%d", &a);

    r = 0;

    while (a) {
        r = (r * 10) + (a % 10);
        a = a / 10;
    }

    printf("%d", r);

    return 0;
}
*/
#include<stdio.h>

int main(){
    
    int n;
    int k;
    int r;
    int ch=0;
    scanf("%d",&n);
    for(int i=n; i<=1005002; i++){
        
        r = 0;
        k = i;
        while(k){
            r = (r * 10) + ( k % 10);
            k = k/10;
        }
        if(r==i){
            for(int j=2; j<i; j++){
                if(i%j==0){
                    ch=1;
                    break;
                }
            }
            if(n==1){
                printf("%d",2);
                return 0;
            }
            else if(ch==0){
                printf("%d",i);
                return 0;
            }
            ch=0;
        }
    }
}

