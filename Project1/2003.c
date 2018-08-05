/*
수들의 합 2
시간 제한 	메모리 제한 	제출 	정답 	맞은 사람 	정답 비율
0.5 초 	128 MB 	5930 	2780 	2084 	52.244%
문제

N개의 수로 된 수열 A[1], A[2], …, A[N] 이 있다. 이 수열의 i번째 수부터 j번째 수까지의 합 A[i]+A[i+1]+…+A[j-1]+A[j]가 M이 되는 경우의 수를 구하는 프로그램을 작성하시오.
입력

첫째 줄에 N(1≤N≤10,000), M(1≤M≤300,000,000)이 주어진다. 다음 줄에는 A[1], A[2], …, A[N]이 공백으로 분리되어 주어진다. 각각의 A[x]는 30,000을 넘지 않는 자연수이다.
출력

첫째 줄에 경우의 수를 출력한다.
예제 입력 1 복사

4 2
1 1 1 1

예제 출력 1 복사

3

예제 입력 2 복사

10 5
1 2 3 4 2 5 3 1 1 2

예제 출력 2 복사

3

 *
 */

#include<cstdio>

int main(){
    int arr[10000]={0,};
    int a,b;
    int j=1;
    long long sum=0;
    long long count = 0;

    scanf("%d %d",&a,&b);

    for(int i=1; i<=a; i++){
        scanf("%d",arr+i);
        sum += arr[i];
        while(sum > b){
            sum -=arr[j];
            j++;
        }
        if(sum == b || arr[i]==b){
            count++;
        }
    }

    printf("%lld",count);

}

/*
 * 같은 알고리즘이지만 더 간략화가 잘 된 소스...
 * 상대적으로 잘 한것처럼 보임..
 *
#include<cstdio>
int n, m, r, h, a[10000], s;
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", a + i);
        s += a[i];
        while (s > m) s -= a[h++];
        r += s == m;
    }
    printf("%d", r);
    return 0;
}
*/
