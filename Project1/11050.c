 /*
문제

자연수 n
과 정수 k 가 주어졌을 때 이항 계수(n k) (n이 위 k가 아래..빌어먹을 사진)

를 구하는 프로그램을 작성하시오.
입력

첫째 줄에 n
과 k가 주어진다. (1 ≤ n≤ 10, 0 ≤ k≤n)
출력
(n k)
를 출력한다.
예제 입력

5 2

예제 출력

10
*/

#include<cstdio>

int main(){
    int a,b,c=1,d=1,e;
    scanf("%d %d",&a,&b);
    e=b;
    for(int i =0; i<e; i++){
        c*=a--;
       d*=b--; 
    }
    printf("%d",c/d);
}
