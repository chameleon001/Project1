/*

N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� ���� ���� N(1<=N<=1,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ���ڰ� �־�����. �� ���� ���밪�� 1,000���� �۰ų� ���� �����̴�. ���� �ߺ����� �ʴ´�.
���

ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.
���� �Է�

5
5
2
3
4
1

���� ���

1
2
3
4
5

*/
/*
#include<iostream>

using namespace std;


int main(){
    int a;
    int b;
    int arr[1000]={0,};
    cin >> a;

    for(int i=0; i<a; i++){
        cin >> arr[i];
    }

    for(int i=0; i<a; i++){
        for(int j=0; j<a-1; j++){
            if(arr[j]>arr[j+1]){
                b = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = b;
            }
        }
    }
    for(int i=0; i<a; i++){
        cout << arr[i]<<endl;
    }
}
*/
//����
//
//

// ����
#include<iostream>
using namespace std;
 
int main(void) {
    int n;

    int * arr = new int[n];
    int key;
    int j;
    cin >> n;
 
    for(int i=0; i< n; i++){
        cin >> arr[i];
    }
 
    for(int i=1; i<n ;i++){
        key = arr[i];

        for(j= i-1 ; j>=0 ; j--){
            if(arr[j] > key){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = key;
    }
 
    //print
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
 
    delete []arr;
    return 0;
}

/*
#include<stdio.h>
#define MAX 1000000    // ������ ������ MAX ����
#define qSWAP(x, y) { int t = x; x = y; y = t; }  // ������ SWAP �Լ�
int N, arr[MAX]; // ������ ������ ������ �迭
 
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
    int idx;
    
    // �Է�    
    scanf("%d", &N);
    for(idx = 0; idx < N; idx++) {
        scanf("%d", &arr[idx]);
    }
    
    qSort(arr, 0, N - 1);    // �迭 �ε��� 0 ~ N-1 ���� ����Ʈ
    
 
    // ���
    for(idx = 0; idx < N; idx++) {
        printf("%d ", arr[idx]);
    }
 
    return 0; 
}

*/
