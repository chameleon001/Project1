/*
N!에서 뒤에서부터 처음 0이 아닌 숫자가 나올 때까지 0의 개수를 구하는 프로그램을 작성하시오.
입력

첫째 줄에 N이 주어진다. (0 ≤ N ≤ 500)
출력

첫째 줄에 구한 0의 개수를 출력한다.
예제 입력

10

예제 출력

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
//5 단위로 0의 개수가 늘어나는것 같았지만 아닌가보다..
//어떤 테케에서 틀린건지....찾아떠나야되는데...
//
//아래의 소스는 2,5 두개를 이용하여 0의 갯수를 찾는모양이다..

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


출처: http://www.crocus.co.kr/391 [Crocus]
 */
