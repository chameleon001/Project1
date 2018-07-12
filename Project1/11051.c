/*
 *
 *  문제

자연수
과 정수 가 주어졌을 때 이항 계수

를 10,007로 나눈 나머지를 구하는 프로그램을 작성하시오.
입력

첫째 줄에
과 가 주어진다. (1 ≤ ≤ 1,000, 0 ≤ ≤

)
출력

 

를 10,007로 나눈 나머지를 출력한다.
예제 입력 1

5 2

예제 출력 1

10
 *
 */

#include<iostream>
#include<algorithm>


int main(){

    long long a,b,c;
    long long x=1;
    long long y=1;
    long long z=1;
    long long n;
    long long w;
    std::cin >>a>>b;

    c=a-b;
    n = std::max(a,b);

    for(int i=1; i<=n; i++){
        
        if(a!=0){
            x=x*a;
            a--;
        }

        if(b!=0){
            y=y*b;
            b--;
        }
        if(c!=0){
            z=z*c;
            c--;
        }
    }

    std::cout << (x/(y*z))%10007;
}

// 너무 큰수일때 런타임에러..
//
//
/* dp를 이용한 방법.
#include <iostream>
#include <memory.h>
 
using namespace std;
 
int combi[1001][1001];
int main()
{
    int n, k;
 
 
    cin >> n >> k;
 
    combi[0][0] = 1;
    combi[1][0] = 1;
    combi[1][1] = 1;
 
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            combi[i][j] = combi[i - 1][j - 1] % 10007 + combi[i - 1][j] % 10007;
            combi[i][j] %= 10007;
        }
    }
 
    cout << combi[n][k];
 
    return 0;
}

*/
