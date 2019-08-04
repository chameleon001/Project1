/*
현정이는 자료 구조 프로젝트를 하고 있다. 다른 학생들은 프로젝트 주제로 스택, 큐와 같은 기본 자료 구조를 구현하는 주제를 선택했다. 하지만, 현정이는 새로운 자료 구조를 만들었다.

현정이가 만든 자료구조는 배열을 응용하는 것이다. 배열 a[1...n]에는 서로 다른 숫자가 n개 저장되어 있다. 현정이는 여기에 Q(i,j,k)라는 함수를 구현해 모두를 놀라게 할 것이다.

    Q(i,j,k): 배열 a[i...j]를 정렬했을 때, k번째 숫자를 리턴하는 함수

예를 들어, a = (1,5,2,6,3,7,4)인 경우 Q(2,5,3)의 답을 구하는 과정을 살펴보자. a[2...5]는 (5,2,6,3)이고, 이 배열을 정렬하면 (2,3,5,6)이 된다. 정렬한 배열에서 3번째 숫자는 5이다. 따라서 Q(2,5,3)의 리턴값은 5이다.

배열 a가 주어지고, Q함수를 호출한 횟수가 주어졌을 때, 각 함수의 리턴값을 출력하는 프로그램을 작성하시오.
입력

첫째 줄에 배열의 크기 n과 함수 Q를 호출한 횟수 m이 주어진다. (1 ≤ n ≤ 100,000, 1 ≤ m ≤ 5,000)

둘째 줄에는 배열에 포함된 정수가 순서대로 주어진다. 각 정수는 절대값이 109를 넘지 않는 정수이다.

다음 m개 줄에는 Q(i,j,k)를 호출할 때 사용한 인자 i,j,k가 주어진다. (1 ≤ i ≤ j ≤ n, 1 ≤ k ≤ j-i+1)
출력

Q함수를 호출할 때마다 그 함수의 리턴값을 한 줄에 하나씩 출력한다. 
예제 입력

7 3
1 5 2 6 3 7 4
2 5 3
4 4 1
1 7 3

예제 출력

5
6
3
*/

#include<stdio.h>
#define MAX 100000  
#define qSWAP(x, y) { int t = x; x = y; y = t; }
int N, arr[MAX]; 

void qSort(int *array, int left, int right) {
    int mLeft = left, mRight = right;
    int pivot = array[(left + right) / 2];
    
    while(mLeft <= mRight) {
        while(pivot > array[mLeft]) mLeft++;
        while(pivot < array[mRight]) mRight--;
        
        if(mLeft <= mRight) {
            qSWAP(array[mLeft], array[mRight]);
            mLeft++, mRight--;
        }
    }
 
    if(left < mRight) qSort(arr, left, mRight);
    if(mLeft < right) qSort(arr, mLeft, right);
}

int main() {
    int q,w,e;
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<b; i++){
        scanf("%d %d %d",&q,&w,&e);
        if(q==w){
            printf("%d",arr[q]);
        }else{
            qSort(arr, q-1, w-1);   

            printf("%d",arr[q-2+e]);
        }
    }
    return 0; 
}

//... 나름 퀵소트인데 시간초과...
//

//아래의 코드는 다른사람이  스트럭쳐를 이용하여  해결한 예제
//벡터같은걸로도 가능할거같아보임.
/*
#include <stdio.h>
#include <algorithm>
 
using namespace std;
 
struct _arr
{
    int num;
    int idx;
};
 
bool comp(_arr const& a, _arr const& b) {
    return a.num < b.num;
}
 
 
_arr arr[5000001];
 
int main()
{
    int n, k, i, j;
    int cnt = 0;
    int start, end, target;
 
    scanf("%d %d", &n, &k);
 
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].num);
        arr[i].idx = i+1;
    }
 
    std::sort(arr, arr+n, comp);
 
    for (i = 0; i < k; i++)
    {
        scanf("%d %d %d", &start, &end, &target);
        
        for (j = 0; j < n; j++)
        {
            if (start <= arr[j].idx && arr[j].idx <= end)
                cnt++;
 
            if(cnt == target)
            {
                printf("%d\n", arr[j].num);
                break;
            }
 
        }
        cnt = 0;
 
    }
}
 
//                                                       This source code Copyright belongs to Crocus


출처: http://www.crocus.co.kr/437 [Crocus]
*/
