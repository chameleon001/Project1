/*
자연수 n과 정수 k가 주어졌을 때 이항 계수(n k ) n이 위 k가 아래

를 1,000,000,007로 나눈 나머지를 구하는 프로그램을 작성하시오.
입력

첫째 줄에n
과 k가 주어진다. (1 ≤ n≤ 4,000,000, 0 ≤ k≤n

)
출력

 

를 1,000,000,007로 나눈 나머지를 출력한다.
예제 입력

5 2

예제 출력

10
*/

#include<cstdio>
#define mod (int)(1e9+7)

const int MAX_N = 4e6;
int n, k, fac[MAX_N + 1];

typedef long long ll;

int f(int x, int y) {
    if (!y) return 1;
    int t = f(x, y / 2);
    return (ll)t*t%mod*(y & 1 ? x : 1) % mod;
}

int main() {
    scanf("%d %d", &n, &k);
    fac[0] = 1;
    for (int i = 1; i <= n; i++) fac[i] = (ll)fac[i - 1] * i%mod;
    printf("%lld", (ll)fac[n] * f(fac[n - k], mod - 2) % mod*f(fac[k], mod - 2) % mod);
    return 0;
}
