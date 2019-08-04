/*
�����̴� �ڷ� ���� ������Ʈ�� �ϰ� �ִ�. �ٸ� �л����� ������Ʈ ������ ����, ť�� ���� �⺻ �ڷ� ������ �����ϴ� ������ �����ߴ�. ������, �����̴� ���ο� �ڷ� ������ �������.

�����̰� ���� �ڷᱸ���� �迭�� �����ϴ� ���̴�. �迭 a[1...n]���� ���� �ٸ� ���ڰ� n�� ����Ǿ� �ִ�. �����̴� ���⿡ Q(i,j,k)��� �Լ��� ������ ��θ� ���� �� ���̴�.

    Q(i,j,k): �迭 a[i...j]�� �������� ��, k��° ���ڸ� �����ϴ� �Լ�

���� ���, a = (1,5,2,6,3,7,4)�� ��� Q(2,5,3)�� ���� ���ϴ� ������ ���캸��. a[2...5]�� (5,2,6,3)�̰�, �� �迭�� �����ϸ� (2,3,5,6)�� �ȴ�. ������ �迭���� 3��° ���ڴ� 5�̴�. ���� Q(2,5,3)�� ���ϰ��� 5�̴�.

�迭 a�� �־�����, Q�Լ��� ȣ���� Ƚ���� �־����� ��, �� �Լ��� ���ϰ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� �迭�� ũ�� n�� �Լ� Q�� ȣ���� Ƚ�� m�� �־�����. (1 �� n �� 100,000, 1 �� m �� 5,000)

��° �ٿ��� �迭�� ���Ե� ������ ������� �־�����. �� ������ ���밪�� 109�� ���� �ʴ� �����̴�.

���� m�� �ٿ��� Q(i,j,k)�� ȣ���� �� ����� ���� i,j,k�� �־�����. (1 �� i �� j �� n, 1 �� k �� j-i+1)
���

Q�Լ��� ȣ���� ������ �� �Լ��� ���ϰ��� �� �ٿ� �ϳ��� ����Ѵ�. 
���� �Է�

7 3
1 5 2 6 3 7 4
2 5 3
4 4 1
1 7 3

���� ���

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

//... ���� ����Ʈ�ε� �ð��ʰ�...
//

//�Ʒ��� �ڵ�� �ٸ������  ��Ʈ���ĸ� �̿��Ͽ�  �ذ��� ����
//���Ͱ����ɷε� �����ҰŰ��ƺ���.
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


��ó: http://www.crocus.co.kr/437 [Crocus]
*/
