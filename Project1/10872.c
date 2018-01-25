/*
0보다 크거나 같은 정수 N이 주어진다. 이 때, N!을 출력하는 프로그램을 작성하시오.
입력

첫째 줄에 정수 N(0 ≤ N ≤ 12)가 주어진다.
출력

첫째 줄에 N!을 출력한다.
예제 입력

10

예제 출력

3628800
*/
#include<stdio.h>

int main(){
    int a;
    int n=1;
    scanf("%d",&a);

    for(int i=1; i<=a; i++){
        n*=i;
    }
    printf("%d",n);
}
