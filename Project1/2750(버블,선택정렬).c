/*

N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
입력

첫째 줄에 수의 개수 N(1<=N<=1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 절대값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
출력

첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
예제 입력

5
5
2
3
4
1

예제 출력

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
//버블
//
//

// 삽입
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
#define MAX 1000000    // 데이터 개수의 MAX 범위
#define qSWAP(x, y) { int t = x; x = y; y = t; }  // 간단한 SWAP 함수
int N, arr[MAX]; // 데이터 개수와 저장할 배열
 
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
    
    // 입력    
    scanf("%d", &N);
    for(idx = 0; idx < N; idx++) {
        scanf("%d", &arr[idx]);
    }
    
    qSort(arr, 0, N - 1);    // 배열 인덱스 0 ~ N-1 까지 퀵소트
    
 
    // 출력
    for(idx = 0; idx < N; idx++) {
        printf("%d ", arr[idx]);
    }
 
    return 0; 
}

*/
